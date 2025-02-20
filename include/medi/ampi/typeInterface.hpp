/*
 * MeDiPack, a Message Differentiation Package
 *
 * Copyright (C) 2017-2019 Chair for Scientific Computing (SciComp), TU Kaiserslautern
 * Homepage: http://www.scicomp.uni-kl.de
 * Contact:  Prof. Nicolas R. Gauger (codi@scicomp.uni-kl.de)
 *
 * Lead developers: Max Sagebaum (SciComp, TU Kaiserslautern)
 *
 * This file is part of MeDiPack (http://www.scicomp.uni-kl.de/software/codi).
 *
 * MeDiPack is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * MeDiPack is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 * You should have received a copy of the GNU
 * General Public License along with MeDiPack.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors: Max Sagebaum, Tim Albring (SciComp, TU Kaiserslautern)
 */

#pragma once

#include <mpi.h>

#include "../adToolInterface.h"
#include "op.hpp"

/**
 * @brief Global namespace for MeDiPack - Message Differentiation Package
 */
namespace medi {

  /**
   * @brief Wrapper interface for MPI types in communications.
   *
   * The interface defines several functions for MeDiPack to decide if a buffer with this
   * type requires special handling for AD. If the represented type is no AD type,
   * then the normal MPI functions are called without touching the buffer.
   *
   * If the type is an AD type, then the required data for AD is extracted from the buffer
   * such that the forward or reverse mode of AD can be executed. There are two types of
   * operation which the AD tool can use:
   *
   *   The first one does not modify the buffer generated by the user. The buffer is send
   *   as it is, only the data for the AD types might be modified such that the receiving
   *   site can use the buffer again.
   *
   *   The second operation mode creates a new buffer and all data from the user generated
   *   buffer is copied into the new buffer. For each AD type the data is replaced with the
   *   required data from the AD tool.
   *
   * This interface can be implemented to support custom data types from the user. See the
   * implementation of an AD tool or the handling of the constructed data types for details.
   */
  class MpiTypeInterface {
    private:

      MPI_Datatype mpiType;
      MPI_Datatype modifiedMpiType;
    public:

      /**
       * @brief The type of the user data which is represented by this interface.
       */
      typedef void Type;

      /**
       * @brief The type of the modified buffer data which is send over the network.
       *
       * The buffer is modified by the AD tool if requested.
       */
      typedef void ModifiedType;

      /**
       * @brief The type of the floating point values which are handled by the AD tool
       */
      typedef void PrimalType;

      /**
       * @brief The type of the identifiers for the AD tool.
       */
      typedef void IndexType;

      //TODO: remove
      typedef void AdjointType;

      /**
       * @brief Wrapper interface for MPI types in communications. See the class description for details.
       * @param[in]         mpiType  The MPI type for the data.
       * @param[in] modifiedMpiType  The MPI type for the modified data.
       */
      MpiTypeInterface(MPI_Datatype mpiType, MPI_Datatype modifiedMpiType) :
        mpiType(mpiType),
        modifiedMpiType(modifiedMpiType) {}

      /**
       * @brief Virtual destructor.
       */
      virtual ~MpiTypeInterface() {}

    protected:

      /**
       * @brief Helper method for extending classes to set the types after the initial construction.
       * @param[in]         mpiType  The MPI type for the data.
       * @param[in] modifiedMpiType  The MPI type for the modified data.
       */
      void setMpiTypes(MPI_Datatype mpiType, MPI_Datatype modifiedMpiType) {
        this->mpiType = mpiType;
        this->modifiedMpiType = modifiedMpiType;
      }

    public:

      /**
       * @brief Return the MPI type for the data that this interface represents.
       * @return The MPI type for the data.
       */
      MPI_Datatype getMpiType() const {
        return mpiType;
      }

      /**
       * @brief Return the MPI type for the modified data.
       * @return The MPI type for the modified data.
       */
      MPI_Datatype getModifiedMpiType() const {
        return modifiedMpiType;
      }


      /**
       * @brief Tell the functions if the underlying AD tool requires new send/recv buffers or
       * if the original buffers can be used.
       * @return true if new send/recv buffers are required.
       */
      virtual bool isModifiedBufferRequired() const = 0;

      /**
       * @brief Get the number of active elements that are contained in count versions of the type.
       *
       * @param[in] count  The number of times this type is contained in the buffer.
       * @return The number of active elements in the buffer.
       */
      virtual int computeActiveElements(const int count) const = 0;

      /**
       * @brief Get the AD tool that handled the AD specifics.
       * @return The handle to the AD tool
       */
      virtual const ADToolInterface& getADTool() const = 0;

      /**
       * @brief Copy all data into the modified buffer and perform the special handling for the AD type.
       *
       * The data for the AD types is modified such that it can be send over the network.
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]      bufMod  The new buffer for the modified data.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are continuous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void copyIntoModifiedBuffer(const void* buf, size_t bufOffset, void* bufMod, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Copy all data from the modified buffer and perform the special handling for the AD type.
       *
       * The data for the AD types is modified such that it can be used on the new machine.
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]      bufMod  The buffer with the modified data.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are contiunous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void copyFromModifiedBuffer(void* buf, size_t bufOffset, const void* bufMod, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Get all the AD identifiers from all AD types in the buffer.
       *
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]     indices  The generated buffer for indices. Indices are stored in a linearized fashion.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are continuous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void getIndices(const void* buf, size_t bufOffset, void* indices, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Register all the AD values on the new machine.
       *
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]     indices  The generated buffer for indices. Indices are stored in a linearized fashion.
       * @param[out]  oldPrimals  The generated buffer for primal values if the AD tool requires theses. Indices are stored in a linearized fashion.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are continuous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void registerValue(void* buf, size_t bufOffset, void* indices, void* oldPrimals, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Clear the AD types in the buffer such that they can be overwritten.
       *
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void clearIndices(void* buf, size_t bufOffset, int elements) const = 0;

      /**
       * @brief Create indices for a reciving buffer if necessary.
       *
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]     indices  The generated buffer for indices. Indices are stored in a linearized fashion.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are continuous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void createIndices(void* buf, size_t bufOffset, void* indices, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Get the primal values from the AD types.
       *
       * @param[in]          buf  The original buffer provided by the user.
       * @param[in]    bufOffset  The offset into the original buffer, as provided by the user.
       * @param[out]     primals  The generated buffer for primal values if the AD tool requires theses. Indices are stored in a linearized fashion.
       * @param[in] bufModOffset  The linearized displacement for the modified buffer. These displacements are continuous and do not contain any holes.
       * @param[in]     elements  The number of elements that should be copied.
       */
      virtual void getValues(const void* buf, size_t bufOffset, void* primals, size_t bufModOffset, int elements) const = 0;

      /**
       * @brief Perform a local reduce operation.
       *
       * @param[in]     buf  The original buffer provided by the user.
       * @param[out] target  The target buffer provided by the user.
       * @param[in]   count  The number of elements per rank.
       * @param[in]      op  The operator for the reduction.
       * @param[in]   ranks  The number of ranks in the communication.
       */
      virtual void performReduce(void* buf, void* target, int count, AMPI_Op op, int ranks) const = 0;

      /**
       * @brief Copy the elements of one buffer into the other.
       *
       * @param[in]        from  The original buffer provided by the user.
       * @param[in]  fromOffset  The offset into the original buffer.
       * @param[out]         to  The target buffer for the data.
       * @param[in]    toOffset  The offset for the target buffer.
       * @param[in]       count  The number of elements that should be copied.
       */
      virtual void copy(void* from, size_t fromOffset, void* to, size_t toOffset, int count) const  = 0;

      /**
       * @brief Initialize the types in the buffer.
       *
       * @param[in,out]   buf  The buffer in which the types are created.
       * @param[in] bufOffset  The offset into the orignal buffer, as provided by the user.
       * @param[in]  elements  THe number of elements the shoudl be initialized.
       */
      virtual void initializeType(Type* buf, size_t bufOffset, int elements) const = 0;

      /**
       * @brief Destroy the types in the buffer.
       *
       * @param[in,out]   buf  The buffer in which the types are destroyed.
       * @param[in] bufOffset  The offset into the orignal buffer, as provided by the user.
       * @param[in]  elements  THe number of elements the shoudl be initialized.
       */
      virtual void freeType(Type* buf, size_t bufOffset, int elements) const = 0;

      /**
       * @brief Create a temporary buffer of the type that this interface represents.
       *
       * @param[in,out] buf  The location for the new buffer
       * @param[in]    size  The number of elements for the buffer
       */
      virtual void createTypeBuffer(void* &buf, size_t size) const = 0;

      /**
       * @brief Create a temporary buffer of the modified type that this interface represents.
       *
       * @param[in,out] buf  The location for the new buffer
       * @param[in]    size  The number of elements for the buffer
       */
      virtual void createModifiedTypeBuffer(void* &buf, size_t size) const = 0;

      /**
       * @brief Delete the temporary buffer.
       *
       * @param[in,out] buf  The location for the buffer
       * @param[in]    size  The size of the temporary buffer
       */
      virtual void deleteTypeBuffer(void* &buf, size_t size) const = 0;

      /**
       * @brief Delete the temporary buffer for the modified types.
       *
       * @param[in,out] buf  The location for the buffer
       */
      virtual void deleteModifiedTypeBuffer(void* &buf) const = 0;

      /**
       * @brief Creates a clone of the mpi type also calling MPI_Type_dub
       *
       * @return The cloned interface.
       */
      virtual MpiTypeInterface* clone() const = 0;
  };

  /**
   * Implements all functions from MpiType that require a type change.
   *
   * Functions that are not implemented: isModifiedBufferRequired
   */
  template <typename Impl, typename TypeB, typename ModifiedTypeB, typename ADToolB>
  class MpiTypeBase : public MpiTypeInterface {
    public:

      typedef typename ADToolB::PrimalType PrimalTypeB;
      typedef typename ADToolB::IndexType IndexTypeB;

      MpiTypeBase(MPI_Datatype mpiType, MPI_Datatype modifiedMpiType) :
        MpiTypeInterface(mpiType, modifiedMpiType) {}

      int computeActiveElements(const int count) const {
        return cast().computeActiveElements(count);
      }

      void copyIntoModifiedBuffer(const void* buf, size_t bufOffset, void* bufMod, size_t bufModOffset, int elements) const {
        cast().copyIntoModifiedBuffer(castBuffer<TypeB>(buf), bufOffset, castBuffer<ModifiedTypeB>(bufMod), bufModOffset, elements);
      }

      void copyFromModifiedBuffer(void* buf, size_t bufOffset, const void* bufMod, size_t bufModOffset, int elements) const {
        cast().copyFromModifiedBuffer(castBuffer<TypeB>(buf), bufOffset, castBuffer<ModifiedTypeB>(bufMod), bufModOffset, elements);
      }

      void getIndices(const void* buf, size_t bufOffset, void* indices, size_t bufModOffset, int elements) const {
        cast().getIndices(castBuffer<TypeB>(buf), bufOffset, castBuffer<IndexTypeB>(indices), bufModOffset, elements);
      }

      void registerValue(void* buf, size_t bufOffset, void* indices, void* oldPrimals, size_t bufModOffset, int elements) const {
        cast().registerValue(castBuffer<TypeB>(buf), bufOffset, castBuffer<IndexTypeB>(indices), castBuffer<PrimalTypeB>(oldPrimals), bufModOffset, elements);
      }

      void clearIndices(void* buf, size_t bufOffset, int elements) const {
        cast().clearIndices(castBuffer<TypeB>(buf), bufOffset, elements);
      }

      void createIndices(void* buf, size_t bufOffset, void* indices, size_t bufModOffset, int elements) const {
        cast().createIndices(castBuffer<TypeB>(buf), bufOffset, castBuffer<IndexTypeB>(indices), bufModOffset, elements);
      }

      void getValues(const void* buf, size_t bufOffset, void* primals, size_t bufModOffset, int elements) const {
        cast().getValues(castBuffer<TypeB>(buf), bufOffset, castBuffer<PrimalTypeB>(primals), bufModOffset, elements);
      }

      void performReduce(void* buf, void* target, int count, AMPI_Op op, int ranks) const {
        cast().performReduce(castBuffer<TypeB>(buf), castBuffer<TypeB>(target), count, op, ranks);
      }

      void copy(void* from, size_t fromOffset, void* to, size_t toOffset, int count) const {
        cast().copy(castBuffer<TypeB>(from), fromOffset, castBuffer<TypeB>(to), toOffset, count);
      }

      void initializeType(void* buf, size_t bufOffset, int elements) const {
        cast().initializeType(castBuffer<TypeB>(buf), bufOffset, elements);
      }

      void freeType(void* buf, size_t bufOffset, int elements) const {
        cast().freeType(castBuffer<TypeB>(buf), bufOffset, elements);
      }

      void createTypeBuffer(void* &buf, size_t size) const {
        cast().createTypeBuffer(castBuffer<TypeB>(buf), size);
      }

      void createModifiedTypeBuffer(void* &buf, size_t size) const {
        cast().createModifiedTypeBuffer(castBuffer<ModifiedTypeB>(buf), size);
      }

      void deleteTypeBuffer(void* &buf, size_t size) const {
        cast().deleteTypeBuffer(castBuffer<TypeB>(buf), size);
      }

      void deleteModifiedTypeBuffer(void* &buf) const {
        cast().deleteModifiedTypeBuffer(castBuffer<ModifiedTypeB>(buf));
      }

    private:

      inline Impl& cast() {
        return *reinterpret_cast<Impl*>(this);
      }

      inline const Impl& cast() const {
        return *reinterpret_cast<const Impl*>(this);
      }

      template <typename T>
      inline T*& castBuffer(void*& buf) const {
        return reinterpret_cast<T*&>(buf);
      }

      template <typename T>
      inline const T*& castBuffer(const void* &buf) const {
        return reinterpret_cast<const T*&>(buf);
      }
  };
}

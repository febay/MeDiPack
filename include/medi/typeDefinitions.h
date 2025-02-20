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

#include "adjointInterface.hpp"

/**
 * @brief Global namespace for MeDiPack - Message Differentiation Package
 */
namespace medi {

  enum class ManualDeleteType {
    Normal,
    Async,
    Wait
  };

  struct HandleBase;
  typedef void (*ReverseFunction)(HandleBase* h, AdjointInterface* a);
  typedef void (*ForwardFunction)(HandleBase* h, AdjointInterface* a);
  typedef void (*PrimalFunction)(HandleBase* h, AdjointInterface* a);
  typedef void (*ContinueFunction)(HandleBase* h);
  typedef void (*PreAdjointOperation)(void* adjoints, void* primals, int count, int dim);
  typedef void (*PostAdjointOperation)(void* adjoints, void* primals, void* rootPrimals, int count, int dim);

  struct HandleBase {
    ReverseFunction funcReverse;
    ForwardFunction funcForward;
    PrimalFunction funcPrimal;
    ManualDeleteType deleteType;

    HandleBase() :
      funcReverse(NULL),
      funcForward(NULL),
      funcPrimal(NULL),
      deleteType(ManualDeleteType::Normal) {}


    virtual ~HandleBase() {}
  };

  // structures for the passive types

  template <typename T>
  struct PairWithInt {
      T a;
      int b;
  };

  typedef PairWithInt<float> FloatIntPair;
  typedef PairWithInt<double> DoubleIntPair;
  typedef PairWithInt<long> LongIntPair;
  typedef PairWithInt<int> IntIntPair;
  typedef PairWithInt<short> ShortIntPair;
  typedef PairWithInt<long double> LongDoubleIntPair;

}

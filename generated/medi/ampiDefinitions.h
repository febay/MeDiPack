/*
 * MeDiPack, a Message Differentiation Package
 *
 * Copyright (C) 2018 Chair for Scientific Computing (SciComp), TU Kaiserslautern
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

#include "../../include/medi/ampi/typePassive.hpp"

/**
 * @brief Global namespace for MeDiPack - Message Differentiation Package
 */
namespace medi {
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_SUCCESS MPI_SUCCESS
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_BUFFER MPI_ERR_BUFFER
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_COUNT MPI_ERR_COUNT
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_TYPE MPI_ERR_TYPE
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_TAG MPI_ERR_TAG
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_COMM MPI_ERR_COMM
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RANK MPI_ERR_RANK
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_REQUEST MPI_ERR_REQUEST
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_ROOT MPI_ERR_ROOT
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_GROUP MPI_ERR_GROUP
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_OP MPI_ERR_OP
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_TOPOLOGY MPI_ERR_TOPOLOGY
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_DIMS MPI_ERR_DIMS
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_ARG MPI_ERR_ARG
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_UNKNOWN MPI_ERR_UNKNOWN
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_TRUNCATE MPI_ERR_TRUNCATE
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_OTHER MPI_ERR_OTHER
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_INTERN MPI_ERR_INTERN
#endif
#if MEDI_MPI_VERSION_1_2 <= MEDI_MPI_TARGET
#define AMPI_ERR_PENDING MPI_ERR_PENDING
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_IN_STATUS MPI_ERR_IN_STATUS
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_ACCESS MPI_ERR_ACCESS
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_AMODE MPI_ERR_AMODE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_ASSERT MPI_ERR_ASSERT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_BAD_FILE MPI_ERR_BAD_FILE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_BASE MPI_ERR_BASE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_CONVERSION MPI_ERR_CONVERSION
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_DISP MPI_ERR_DISP
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_DUP_DATAREP MPI_ERR_DUP_DATAREP
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_FILE_EXISTS MPI_ERR_FILE_EXISTS
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_FILE_IN_USE MPI_ERR_FILE_IN_USE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_FILE MPI_ERR_FILE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_INFO_KEY MPI_ERR_INFO_KEY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_INFO_NOKEY MPI_ERR_INFO_NOKEY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_INFO_VALUE MPI_ERR_INFO_VALUE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_INFO MPI_ERR_INFO
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_IO MPI_ERR_IO
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_KEYVAL MPI_ERR_KEYVAL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_LOCKTYPE MPI_ERR_LOCKTYPE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_NAME MPI_ERR_NAME
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_NO_MEM MPI_ERR_NO_MEM
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_NOT_SAME MPI_ERR_NOT_SAME
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_NO_SPACE MPI_ERR_NO_SPACE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_NO_SUCH_FILE MPI_ERR_NO_SUCH_FILE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_PORT MPI_ERR_PORT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_QUOTA MPI_ERR_QUOTA
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_READ_ONLY MPI_ERR_READ_ONLY
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_ATTACH MPI_ERR_RMA_ATTACH
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_CONFLICT MPI_ERR_RMA_CONFLICT
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_RANGE MPI_ERR_RMA_RANGE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_SHARED MPI_ERR_RMA_SHARED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_SYNC MPI_ERR_RMA_SYNC
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_RMA_FLAVOR MPI_ERR_RMA_FLAVOR
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_SERVICE MPI_ERR_SERVICE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_SIZE MPI_ERR_SIZE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_SPAWN MPI_ERR_SPAWN
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_UNSUPPORTED_DATAREP MPI_ERR_UNSUPPORTED_DATAREP
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_UNSUPPORTED_OPERATION MPI_ERR_UNSUPPORTED_OPERATION
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_WIN MPI_ERR_WIN
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_CANNOT_INIT MPI_T_ERR_CANNOT_INIT
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_NOT_INITIALIZED MPI_T_ERR_NOT_INITIALIZED
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_MEMORY MPI_T_ERR_MEMORY
#endif
#if MEDI_MPI_VERSION_3_1 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID MPI_T_ERR_INVALID
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID_INDEX MPI_T_ERR_INVALID_INDEX
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID_ITEM MPI_T_ERR_INVALID_ITEM
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID_SESSION MPI_T_ERR_INVALID_SESSION
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID_HANDLE MPI_T_ERR_INVALID_HANDLE
#endif
#if MEDI_MPI_VERSION_3_1 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_INVALID_NAME MPI_T_ERR_INVALID_NAME
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_OUT_OF_HANDLES MPI_T_ERR_OUT_OF_HANDLES
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_OUT_OF_SESSIONS MPI_T_ERR_OUT_OF_SESSIONS
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_CVAR_SET_NOT_NOW MPI_T_ERR_CVAR_SET_NOT_NOW
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_CVAR_SET_NEVER MPI_T_ERR_CVAR_SET_NEVER
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_PVAR_NO_WRITE MPI_T_ERR_PVAR_NO_WRITE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_PVAR_NO_STARTSTOP MPI_T_ERR_PVAR_NO_STARTSTOP
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ERR_PVAR_NO_ATOMIC MPI_T_ERR_PVAR_NO_ATOMIC
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERR_LASTCODE MPI_ERR_LASTCODE
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_BOTTOM MPI_BOTTOM
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_PROC_NULL MPI_PROC_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ANY_SOURCE MPI_ANY_SOURCE
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ANY_TAG MPI_ANY_TAG
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_UNDEFINED MPI_UNDEFINED
#endif
#if MEDI_MPI_VERSION_1_1 <= MEDI_MPI_TARGET
#define AMPI_BSEND_OVERHEAD MPI_BSEND_OVERHEAD
#endif
#if MEDI_MPI_VERSION_1_1 <= MEDI_MPI_TARGET
#define AMPI_KEYVAL_INVALID MPI_KEYVAL_INVALID
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_LOCK_EXCLUSIVE MPI_LOCK_EXCLUSIVE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_LOCK_SHARED MPI_LOCK_SHARED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ROOT MPI_ROOT
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_MESSAGE_NO_PROC MPI_MESSAGE_NO_PROC
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERRORS_ARE_FATAL MPI_ERRORS_ARE_FATAL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERRORS_RETURN MPI_ERRORS_RETURN
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_DATAREP_STRING MPI_MAX_DATAREP_STRING
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_ERROR_STRING MPI_MAX_ERROR_STRING
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_INFO_KEY MPI_MAX_INFO_KEY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_INFO_VAL MPI_MAX_INFO_VAL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_LIBRARY_VERSION_STRING MPI_MAX_LIBRARY_VERSION_STRING
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_OBJECT_NAME MPI_MAX_OBJECT_NAME
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_PORT_NAME MPI_MAX_PORT_NAME
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_MAX_PROCESSOR_NAME MPI_MAX_PROCESSOR_NAME
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_COMM_WORLD MPI_COMM_WORLD
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_COMM_SELF MPI_COMM_SELF
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_COMM_TYPE_SHARED MPI_COMM_TYPE_SHARED
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_IDENT MPI_IDENT
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_CONGRUENT MPI_CONGRUENT
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_SIMILAR MPI_SIMILAR
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_UNEQUAL MPI_UNEQUAL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_INFO_ENV MPI_INFO_ENV
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_TAG_UB MPI_TAG_UB
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_IO MPI_IO
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_HOST MPI_HOST
#endif
#if MEDI_MPI_VERSION_1_1 <= MEDI_MPI_TARGET
#define AMPI_WTIME_IS_GLOBAL MPI_WTIME_IS_GLOBAL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_GROUP_NULL MPI_GROUP_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_COMM_NULL MPI_COMM_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_DATATYPE_NULL MPI_DATATYPE_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_OP_NULL MPI_OP_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_ERRHANDLER_NULL MPI_ERRHANDLER_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_FILE_NULL MPI_FILE_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_INFO_NULL MPI_INFO_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_NULL MPI_WIN_NULL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_MESSAGE_NULL MPI_MESSAGE_NULL
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_GROUP_EMPTY MPI_GROUP_EMPTY
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_GRAPH MPI_GRAPH
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_CART MPI_CART
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_DIST_GRAPH MPI_DIST_GRAPH
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_COMM_NULL_COPY_FN MPI_COMM_NULL_COPY_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_COMM_DUP_FN MPI_COMM_DUP_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_COMM_NULL_DELETE_FN MPI_COMM_NULL_DELETE_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_WIN_NULL_COPY_FN MPI_WIN_NULL_COPY_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_WIN_DUP_FN MPI_WIN_DUP_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_WIN_NULL_DELETE_FN MPI_WIN_NULL_DELETE_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_TYPE_NULL_COPY_FN MPI_TYPE_NULL_COPY_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_TYPE_DUP_FN MPI_TYPE_DUP_FN
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_TYPE_NULL_DELETE_FN MPI_TYPE_NULL_DELETE_FN
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_CONVERSION_FN_NULL MPI_CONVERSION_FN_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_APPNUM MPI_APPNUM
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_LASTUSEDCODE MPI_LASTUSEDCODE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_UNIVERSE_SIZE MPI_UNIVERSE_SIZE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_BASE MPI_WIN_BASE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_DISP_UNIT MPI_WIN_DISP_UNIT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_SIZE MPI_WIN_SIZE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_CREATE_FLAVOR MPI_WIN_CREATE_FLAVOR
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_MODEL MPI_WIN_MODEL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_FLAVOR_CREATE MPI_WIN_FLAVOR_CREATE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_FLAVOR_ALLOCATE MPI_WIN_FLAVOR_ALLOCATE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_FLAVOR_DYNAMIC MPI_WIN_FLAVOR_DYNAMIC
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_FLAVOR_SHARED MPI_WIN_FLAVOR_SHARED
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_SEPARATE MPI_WIN_SEPARATE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WIN_UNIFIED MPI_WIN_UNIFIED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_APPEND MPI_MODE_APPEND
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_CREATE MPI_MODE_CREATE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_DELETE_ON_CLOSE MPI_MODE_DELETE_ON_CLOSE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_EXCL MPI_MODE_EXCL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_NOCHECK MPI_MODE_NOCHECK
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_NOPRECEDE MPI_MODE_NOPRECEDE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_NOPUT MPI_MODE_NOPUT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_NOSTORE MPI_MODE_NOSTORE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_NOSUCCEED MPI_MODE_NOSUCCEED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_RDONLY MPI_MODE_RDONLY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_RDWR MPI_MODE_RDWR
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_SEQUENTIAL MPI_MODE_SEQUENTIAL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_UNIQUE_OPEN MPI_MODE_UNIQUE_OPEN
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_MODE_WRONLY MPI_MODE_WRONLY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_CONTIGUOUS MPI_COMBINER_CONTIGUOUS
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_DARRAY MPI_COMBINER_DARRAY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_DUP MPI_COMBINER_DUP
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_F90_COMPLEX MPI_COMBINER_F90_COMPLEX
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_F90_INTEGER MPI_COMBINER_F90_INTEGER
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_F90_REAL MPI_COMBINER_F90_REAL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_HINDEXED MPI_COMBINER_HINDEXED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_HVECTOR MPI_COMBINER_HVECTOR
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_INDEXED_BLOCK MPI_COMBINER_INDEXED_BLOCK
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_HINDEXED_BLOCK MPI_COMBINER_HINDEXED_BLOCK
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_INDEXED MPI_COMBINER_INDEXED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_NAMED MPI_COMBINER_NAMED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_RESIZED MPI_COMBINER_RESIZED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_STRUCT MPI_COMBINER_STRUCT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_SUBARRAY MPI_COMBINER_SUBARRAY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_COMBINER_VECTOR MPI_COMBINER_VECTOR
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_THREAD_FUNNELED MPI_THREAD_FUNNELED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_THREAD_MULTIPLE MPI_THREAD_MULTIPLE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_THREAD_SERIALIZED MPI_THREAD_SERIALIZED
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_THREAD_SINGLE MPI_THREAD_SINGLE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_DISPLACEMENT_CURRENT MPI_DISPLACEMENT_CURRENT
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_DISTRIBUTE_BLOCK MPI_DISTRIBUTE_BLOCK
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_DISTRIBUTE_CYCLIC MPI_DISTRIBUTE_CYCLIC
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_DISTRIBUTE_DFLT_DARG MPI_DISTRIBUTE_DFLT_DARG
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_DISTRIBUTE_NONE MPI_DISTRIBUTE_NONE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ORDER_C MPI_ORDER_C
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ORDER_FORTRAN MPI_ORDER_FORTRAN
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_SEEK_CUR MPI_SEEK_CUR
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_SEEK_END MPI_SEEK_END
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_SEEK_SET MPI_SEEK_SET
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ARGVS_NULL MPI_ARGVS_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ARGV_NULL MPI_ARGV_NULL
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_ERRCODES_IGNORE MPI_ERRCODES_IGNORE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_STATUSES_IGNORE MPI_STATUSES_IGNORE
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_STATUS_IGNORE MPI_STATUS_IGNORE
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
#define AMPI_UNWEIGHTED MPI_UNWEIGHTED
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_WEIGHTS_EMPTY MPI_WEIGHTS_EMPTY
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_SUBVERSION MPI_SUBVERSION
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_VERSION MPI_VERSION
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_ENUM_NULL MPI_T_ENUM_NULL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_CVAR_HANDLE_NULL MPI_T_CVAR_HANDLE_NULL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_HANDLE_NULL MPI_T_PVAR_HANDLE_NULL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_SESSION_NULL MPI_T_PVAR_SESSION_NULL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_USER_BASIC MPI_T_VERBOSITY_USER_BASIC
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_USER_DETAIL MPI_T_VERBOSITY_USER_DETAIL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_USER_ALL MPI_T_VERBOSITY_USER_ALL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_TUNER_BASIC MPI_T_VERBOSITY_TUNER_BASIC
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_TUNER_DETAIL MPI_T_VERBOSITY_TUNER_DETAIL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_TUNER_ALL MPI_T_VERBOSITY_TUNER_ALL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_MPIDEV_BASIC MPI_T_VERBOSITY_MPIDEV_BASIC
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_MPIDEV_DETAIL MPI_T_VERBOSITY_MPIDEV_DETAIL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_VERBOSITY_MPIDEV_ALL MPI_T_VERBOSITY_MPIDEV_ALL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_NO_OBJECT MPI_T_BIND_NO_OBJECT
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_COMM MPI_T_BIND_MPI_COMM
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_DATATYPE MPI_T_BIND_MPI_DATATYPE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_ERRHANDLER MPI_T_BIND_MPI_ERRHANDLER
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_FILE MPI_T_BIND_MPI_FILE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_GROUP MPI_T_BIND_MPI_GROUP
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_OP MPI_T_BIND_MPI_OP
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_REQUEST MPI_T_BIND_MPI_REQUEST
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_WIN MPI_T_BIND_MPI_WIN
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_MESSAGE MPI_T_BIND_MPI_MESSAGE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_BIND_AMPI_INFO MPI_T_BIND_MPI_INFO
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_CONSTANT MPI_T_SCOPE_CONSTANT
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_READONLY MPI_T_SCOPE_READONLY
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_LOCAL MPI_T_SCOPE_LOCAL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_GROUP MPI_T_SCOPE_GROUP
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_GROUP_EQ MPI_T_SCOPE_GROUP_EQ
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_ALL MPI_T_SCOPE_ALL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_SCOPE_ALL_EQ MPI_T_SCOPE_ALL_EQ
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_ALL_HANDLES MPI_T_PVAR_ALL_HANDLES
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_STATE MPI_T_PVAR_CLASS_STATE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_LEVEL MPI_T_PVAR_CLASS_LEVEL
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_SIZE MPI_T_PVAR_CLASS_SIZE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_PERCENTAGE MPI_T_PVAR_CLASS_PERCENTAGE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_HIGHWATERMARK MPI_T_PVAR_CLASS_HIGHWATERMARK
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_LOWWATERMARK MPI_T_PVAR_CLASS_LOWWATERMARK
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_COUNTER MPI_T_PVAR_CLASS_COUNTER
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_AGGREGATE MPI_T_PVAR_CLASS_AGGREGATE
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_TIMER MPI_T_PVAR_CLASS_TIMER
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_PVAR_CLASS_GENERIC MPI_T_PVAR_CLASS_GENERIC
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_Aint MPI_Aint
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_Count MPI_Count
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_Fint MPI_Fint
#endif
#if MEDI_MPI_VERSION_2_1 <= MEDI_MPI_TARGET
#define AMPI_Offset MPI_Offset
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_Status MPI_Status
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_F08_status MPI_F08_status
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_Comm MPI_Comm
#endif
#if MEDI_MPI_VERSION_1_2 <= MEDI_MPI_TARGET
#define AMPI_Errhandler MPI_Errhandler
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_File MPI_File
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
#define AMPI_Group MPI_Group
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_Info MPI_Info
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
#define AMPI_Win MPI_Win
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_enum MPI_T_enum
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_cvar_handle MPI_T_cvar_handle
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_pvar_handle MPI_T_pvar_handle
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
#define AMPI_T_pvar_session MPI_T_pvar_session
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_3_0
#define AMPI_UB MPI_UB
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_3_0
#define AMPI_LB MPI_LB
#endif
#if MEDI_MPI_VERSION_1_1 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_1_2
#define AMPI_PENDING MPI_PENDING
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_3_0
#define AMPI_COMBINER_HINDEXED_INTEGER MPI_COMBINER_HINDEXED_INTEGER
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_3_0
#define AMPI_COMBINER_HVECTOR_INTEGER MPI_COMBINER_HVECTOR_INTEGER
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_3_0
#define AMPI_COMBINER_STRUCT_INTEGER MPI_COMBINER_STRUCT_INTEGER
#endif

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MPI_User_function AMPI_User_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Comm_copy_attr_function AMPI_Comm_copy_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Comm_delete_attr_function AMPI_Comm_delete_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Win_copy_attr_function AMPI_Win_copy_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Win_delete_attr_function AMPI_Win_delete_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Type_copy_attr_function AMPI_Type_copy_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Type_delete_attr_function AMPI_Type_delete_attr_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Comm_errhandler_function AMPI_Comm_errhandler_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Win_errhandler_function AMPI_Win_errhandler_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_File_errhandler_function AMPI_File_errhandler_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Grequest_query_function AMPI_Grequest_query_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Grequest_free_function AMPI_Grequest_free_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Grequest_cancel_function AMPI_Grequest_cancel_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Datarep_extent_function AMPI_Datarep_extent_function;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MPI_Datarep_conversion_function AMPI_Datarep_conversion_function;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MPI_Copy_function AMPI_Copy_function;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MPI_Delete_function AMPI_Delete_function;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET && MEDI_MPI_TARGET < MEDI_MPI_VERSION_4_0
  typedef MPI_Handler_function AMPI_Handler_function;
#endif

  void initializeOperators();

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_MAX;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_MIN;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_SUM;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_PROD;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_MAXLOC;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_MINLOC;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_BAND;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_BOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_BXOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_LAND;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_LOR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_LXOR;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_REPLACE;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  extern AMPI_Op AMPI_NO_OP;
#endif

  void initTypes();
  void finalizeTypes();

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<char> AMPI_CHAR_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<short> AMPI_SHORT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<int> AMPI_INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<long> AMPI_LONG_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<long long int> AMPI_LONG_LONG_INT_Type;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<long long int> AMPI_LONG_LONG_Type;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<signed char> AMPI_SIGNED_CHAR_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<unsigned char> AMPI_UNSIGNED_CHAR_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<unsigned short> AMPI_UNSIGNED_SHORT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<unsigned int> AMPI_UNSIGNED_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<unsigned long> AMPI_UNSIGNED_LONG_Type;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<unsigned long long int> AMPI_UNSIGNED_LONG_LONG_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<float> AMPI_FLOAT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<double> AMPI_DOUBLE_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<long double> AMPI_LONG_DOUBLE_Type;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<wchar_t> AMPI_WCHAR_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<bool> AMPI_C_BOOL_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<int8_t> AMPI_INT8_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<int16_t> AMPI_INT16_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<int32_t> AMPI_INT32_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<int64_t> AMPI_INT64_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint8_t> AMPI_UINT8_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint16_t> AMPI_UINT16_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint32_t> AMPI_UINT32_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint64_t> AMPI_UINT64_T_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<MPI_Aint> AMPI_AINT_Type;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<MPI_Count> AMPI_COUNT_Type;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<MPI_Offset> AMPI_OFFSET_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint8_t> AMPI_BYTE_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<uint8_t> AMPI_PACKED_Type;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<bool> AMPI_CXX_BOOL_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::FloatIntPair> AMPI_FLOAT_INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::DoubleIntPair> AMPI_DOUBLE_INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::LongIntPair> AMPI_LONG_INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::IntIntPair> AMPI_2INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::ShortIntPair> AMPI_SHORT_INT_Type;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  typedef MpiTypePassive<medi::LongDoubleIntPair> AMPI_LONG_DOUBLE_INT_Type;
#endif

#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_CHAR_Type* AMPI_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_SHORT_Type* AMPI_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_INT_Type* AMPI_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_Type* AMPI_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_LONG_INT_Type* AMPI_LONG_LONG_INT;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_LONG_Type* AMPI_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  extern AMPI_SIGNED_CHAR_Type* AMPI_SIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_UNSIGNED_CHAR_Type* AMPI_UNSIGNED_CHAR;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_UNSIGNED_SHORT_Type* AMPI_UNSIGNED_SHORT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_UNSIGNED_Type* AMPI_UNSIGNED;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_UNSIGNED_LONG_Type* AMPI_UNSIGNED_LONG;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  extern AMPI_UNSIGNED_LONG_LONG_Type* AMPI_UNSIGNED_LONG_LONG;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_FLOAT_Type* AMPI_FLOAT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_DOUBLE_Type* AMPI_DOUBLE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_DOUBLE_Type* AMPI_LONG_DOUBLE;
#endif
#if MEDI_MPI_VERSION_2_0 <= MEDI_MPI_TARGET
  extern AMPI_WCHAR_Type* AMPI_WCHAR;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_C_BOOL_Type* AMPI_C_BOOL;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_INT8_T_Type* AMPI_INT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_INT16_T_Type* AMPI_INT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_INT32_T_Type* AMPI_INT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_INT64_T_Type* AMPI_INT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_UINT8_T_Type* AMPI_UINT8_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_UINT16_T_Type* AMPI_UINT16_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_UINT32_T_Type* AMPI_UINT32_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_UINT64_T_Type* AMPI_UINT64_T;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_AINT_Type* AMPI_AINT;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  extern AMPI_COUNT_Type* AMPI_COUNT;
#endif
#if MEDI_MPI_VERSION_2_2 <= MEDI_MPI_TARGET
  extern AMPI_OFFSET_Type* AMPI_OFFSET;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_BYTE_Type* AMPI_BYTE;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_PACKED_Type* AMPI_PACKED;
#endif
#if MEDI_MPI_VERSION_3_0 <= MEDI_MPI_TARGET
  extern AMPI_CXX_BOOL_Type* AMPI_CXX_BOOL;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_FLOAT_INT_Type* AMPI_FLOAT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_DOUBLE_INT_Type* AMPI_DOUBLE_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_INT_Type* AMPI_LONG_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_2INT_Type* AMPI_2INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_SHORT_INT_Type* AMPI_SHORT_INT;
#endif
#if MEDI_MPI_VERSION_1_0 <= MEDI_MPI_TARGET
  extern AMPI_LONG_DOUBLE_INT_Type* AMPI_LONG_DOUBLE_INT;
#endif
}

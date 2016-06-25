//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeFunctionscan.h
//
// Identification: src/include/parser/executor/nodeFunctionscan.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeFunctionscan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeFunctionscan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEFUNCTIONSCAN_H
#define NODEFUNCTIONSCAN_H

#include "parser/nodes/execnodes.h"

extern FunctionScanState *ExecInitFunctionScan(FunctionScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecFunctionScan(FunctionScanState *node);
extern void ExecEndFunctionScan(FunctionScanState *node);
extern void ExecReScanFunctionScan(FunctionScanState *node);

#endif   /* NODEFUNCTIONSCAN_H */

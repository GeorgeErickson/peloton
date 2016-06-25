//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeSubqueryscan.h
//
// Identification: src/include/parser/executor/nodeSubqueryscan.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeSubqueryscan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeSubqueryscan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESUBQUERYSCAN_H
#define NODESUBQUERYSCAN_H

#include "parser/nodes/execnodes.h"

extern SubqueryScanState *ExecInitSubqueryScan(SubqueryScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecSubqueryScan(SubqueryScanState *node);
extern void ExecEndSubqueryScan(SubqueryScanState *node);
extern void ExecReScanSubqueryScan(SubqueryScanState *node);

#endif   /* NODESUBQUERYSCAN_H */

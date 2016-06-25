//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeTidscan.h
//
// Identification: src/include/parser/executor/nodeTidscan.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeTidscan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeTidscan.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODETIDSCAN_H
#define NODETIDSCAN_H

#include "parser/nodes/execnodes.h"

extern TidScanState *ExecInitTidScan(TidScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecTidScan(TidScanState *node);
extern void ExecEndTidScan(TidScanState *node);
extern void ExecReScanTidScan(TidScanState *node);

#endif   /* NODETIDSCAN_H */

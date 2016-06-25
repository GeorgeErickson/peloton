//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// nodeSort.h
//
// Identification: src/include/parser/executor/nodeSort.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * nodeSort.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/executor/nodeSort.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESORT_H
#define NODESORT_H

#include "parser/nodes/execnodes.h"

extern SortState *ExecInitSort(Sort *node, EState *estate, int eflags);
extern TupleTableSlot *ExecSort(SortState *node);
extern void ExecEndSort(SortState *node);
extern void ExecSortMarkPos(SortState *node);
extern void ExecSortRestrPos(SortState *node);
extern void ExecReScanSort(SortState *node);

#endif   /* NODESORT_H */

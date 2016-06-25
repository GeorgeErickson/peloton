//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// storage.h
//
// Identification: src/include/parser/catalog/storage.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * storage.h
 *	  prototypes for functions in backend/catalog/storage.c
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/catalog/storage.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef STORAGE_H
#define STORAGE_H

#include "parser/storage/block.h"
#include "parser/storage/relfilenode.h"
#include "parser/utils/relcache.h"

extern void RelationCreateStorage(RelFileNode rnode, char relpersistence);
extern void RelationDropStorage(Relation rel);
extern void RelationPreserveStorage(RelFileNode rnode, bool atCommit);
extern void RelationTruncate(Relation rel, BlockNumber nblocks);

/*
 * These functions used to be in storage/smgr/smgr.c, which explains the
 * naming
 */
extern void smgrDoPendingDeletes(bool isCommit);
extern int	smgrGetPendingDeletes(bool forCommit, RelFileNode **ptr);
extern void AtSubCommit_smgr(void);
extern void AtSubAbort_smgr(void);
extern void PostPrepare_smgr(void);

#endif   /* STORAGE_H */

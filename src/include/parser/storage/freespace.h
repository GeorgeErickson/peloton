//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// freespace.h
//
// Identification: src/include/parser/storage/freespace.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * freespace.h
 *	  POSTGRES free space map for quickly finding free space in relations
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/storage/freespace.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef FREESPACE_H_
#define FREESPACE_H_

#include "parser/storage/block.h"
#include "parser/storage/relfilenode.h"
#include "parser/utils/relcache.h"

/* prototypes for public functions in freespace.c */
extern Size GetRecordedFreeSpace(Relation rel, BlockNumber heapBlk);
extern BlockNumber GetPageWithFreeSpace(Relation rel, Size spaceNeeded);
extern BlockNumber RecordAndGetPageWithFreeSpace(Relation rel,
							  BlockNumber oldPage,
							  Size oldSpaceAvail,
							  Size spaceNeeded);
extern void RecordPageWithFreeSpace(Relation rel, BlockNumber heapBlk,
						Size spaceAvail);
extern void XLogRecordPageWithFreeSpace(RelFileNode rnode, BlockNumber heapBlk,
							Size spaceAvail);

extern void FreeSpaceMapTruncateRel(Relation rel, BlockNumber nblocks);
extern void FreeSpaceMapVacuum(Relation rel);

#endif   /* FREESPACE_H_ */

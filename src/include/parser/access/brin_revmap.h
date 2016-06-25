//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// brin_revmap.h
//
// Identification: src/include/parser/access/brin_revmap.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*
 * brin_revmap.h
 *		Prototypes for BRIN reverse range maps
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * IDENTIFICATION
 *		src/include/access/brin_revmap.h
 */

#ifndef BRIN_REVMAP_H
#define BRIN_REVMAP_H

#include "parser/access/brin_tuple.h"
#include "parser/storage/block.h"
#include "parser/storage/buf.h"
#include "parser/storage/itemptr.h"
#include "parser/storage/off.h"
#include "parser/utils/relcache.h"

/* struct definition lives in brin_revmap.c */
typedef struct BrinRevmap BrinRevmap;

extern BrinRevmap *brinRevmapInitialize(Relation idxrel,
					 BlockNumber *pagesPerRange);
extern void brinRevmapTerminate(BrinRevmap *revmap);

extern void brinRevmapExtend(BrinRevmap *revmap,
				 BlockNumber heapBlk);
extern Buffer brinLockRevmapPageForUpdate(BrinRevmap *revmap,
							BlockNumber heapBlk);
extern void brinSetHeapBlockItemptr(Buffer rmbuf, BlockNumber pagesPerRange,
						BlockNumber heapBlk, ItemPointerData tid);
extern BrinTuple *brinGetTupleForHeapBlock(BrinRevmap *revmap,
						 BlockNumber heapBlk, Buffer *buf, OffsetNumber *off,
						 Size *size, int mode);

#endif   /* BRIN_REVMAP_H */

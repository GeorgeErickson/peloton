//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// portalcmds.h
//
// Identification: src/include/parser/commands/portalcmds.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * portalcmds.h
 *	  prototypes for portalcmds.c.
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/portalcmds.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef PORTALCMDS_H
#define PORTALCMDS_H

#include "parser/nodes/parsenodes.h"
#include "parser/utils/portal.h"


extern void PerformCursorOpen(PlannedStmt *stmt, ParamListInfo params,
				  const char *queryString, bool isTopLevel);

extern void PerformPortalFetch(FetchStmt *stmt, DestReceiver *dest,
				   char *completionTag);

extern void PerformPortalClose(const char *name);

extern void PortalCleanup(Portal portal);

extern void PersistHoldablePortal(Portal portal);

#endif   /* PORTALCMDS_H */

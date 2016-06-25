//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// view.h
//
// Identification: src/include/parser/commands/view.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * view.h
 *
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/view.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef VIEW_H
#define VIEW_H

#include "parser/catalog/objectaddress.h"
#include "parser/nodes/parsenodes.h"

extern void validateWithCheckOption(char *value);

extern ObjectAddress DefineView(ViewStmt *stmt, const char *queryString);

extern void StoreViewQuery(Oid viewOid, Query *viewParse, bool replace);

#endif   /* VIEW_H */

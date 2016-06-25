//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// alter.h
//
// Identification: src/include/parser/commands/alter.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * alter.h
 *	  prototypes for commands/alter.c
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/alter.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef ALTER_H
#define ALTER_H

#include "parser/catalog/dependency.h"
#include "parser/catalog/objectaddress.h"
#include "parser/nodes/parsenodes.h"
#include "parser/utils/relcache.h"

extern ObjectAddress ExecRenameStmt(RenameStmt *stmt);

extern ObjectAddress ExecAlterObjectSchemaStmt(AlterObjectSchemaStmt *stmt,
						  ObjectAddress *oldSchemaAddr);
extern Oid AlterObjectNamespace_oid(Oid classId, Oid objid, Oid nspOid,
						 ObjectAddresses *objsMoved);

extern ObjectAddress ExecAlterOwnerStmt(AlterOwnerStmt *stmt);
extern void AlterObjectOwner_internal(Relation catalog, Oid objectId,
						  Oid new_ownerId);

#endif   /* ALTER_H */

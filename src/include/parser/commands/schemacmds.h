//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// schemacmds.h
//
// Identification: src/include/parser/commands/schemacmds.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * schemacmds.h
 *	  prototypes for schemacmds.c.
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/commands/schemacmds.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef SCHEMACMDS_H
#define SCHEMACMDS_H

#include "parser/catalog/objectaddress.h"
#include "parser/nodes/parsenodes.h"

extern Oid CreateSchemaCommand(CreateSchemaStmt *parsetree,
					const char *queryString);

extern void RemoveSchemaById(Oid schemaOid);

extern ObjectAddress RenameSchema(const char *oldname, const char *newname);
extern ObjectAddress AlterSchemaOwner(const char *name, Oid newOwnerId);
extern void AlterSchemaOwner_oid(Oid schemaOid, Oid newOwnerId);

#endif   /* SCHEMACMDS_H */

//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// postgres_fe.h
//
// Identification: src/include/parser/postgres_fe.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-------------------------------------------------------------------------
 *
 * postgres_fe.h
 *	  Primary include file for PostgreSQL client-side .c files
 *
 * This should be the first file included by PostgreSQL client libraries and
 * application programs --- but not by backend modules, which should include
 * postgres.h.
 *
 *
 * Portions Copyright (c) 1996-2015, PostgreSQL Global Development Group
 * Portions Copyright (c) 1995, Regents of the University of California
 *
 * src/include/postgres_fe.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef POSTGRES_FE_H
#define POSTGRES_FE_H

#ifndef FRONTEND
#define FRONTEND 1
#endif

#include "parser/c.h"

#include "parser/common/fe_memutils.h"

#endif   /* POSTGRES_FE_H */

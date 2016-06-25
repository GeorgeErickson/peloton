//===----------------------------------------------------------------------===//
//
//                         Peloton
//
// ascii.h
//
// Identification: src/include/parser/utils/ascii.h
//
// Copyright (c) 2015-16, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//


/*-----------------------------------------------------------------------
 * ascii.h
 *
 *	 Portions Copyright (c) 1999-2015, PostgreSQL Global Development Group
 *
 * src/include/utils/ascii.h
 *
 *-----------------------------------------------------------------------
 */

#ifndef _ASCII_H_
#define _ASCII_H_

#include "parser/fmgr.h"

extern Datum to_ascii_encname(PG_FUNCTION_ARGS);
extern Datum to_ascii_enc(PG_FUNCTION_ARGS);
extern Datum to_ascii_default(PG_FUNCTION_ARGS);

extern void ascii_safe_strlcpy(char *dest, const char *src, size_t destsiz);

#endif   /* _ASCII_H_ */

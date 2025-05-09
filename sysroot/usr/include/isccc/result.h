/*
 * Portions Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, you can obtain one at https://mozilla.org/MPL/2.0/.
 *
 * See the COPYRIGHT file distributed with this work for additional
 * information regarding copyright ownership.
 *
 * Portions Copyright (C) 2001 Nominum, Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC AND NOMINUM DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef ISCCC_RESULT_H
#define ISCCC_RESULT_H 1

/*! \file isccc/result.h */

#include <isc/lang.h>
#include <isc/resultclass.h>
#include <isc/result.h>

#include <isccc/types.h>

/*% Unknown Version */
#define ISCCC_R_UNKNOWNVERSION		(ISC_RESULTCLASS_ISCCC + 0)
/*% Syntax Error */
#define ISCCC_R_SYNTAX			(ISC_RESULTCLASS_ISCCC + 1)
/*% Bad Authorization */
#define ISCCC_R_BADAUTH			(ISC_RESULTCLASS_ISCCC + 2)
/*% Expired */
#define ISCCC_R_EXPIRED			(ISC_RESULTCLASS_ISCCC + 3)
/*% Clock Skew */
#define ISCCC_R_CLOCKSKEW		(ISC_RESULTCLASS_ISCCC + 4)
/*% Duplicate */
#define ISCCC_R_DUPLICATE		(ISC_RESULTCLASS_ISCCC + 5)
/*% Maximum recursion depth */
#define ISCCC_R_MAXDEPTH		(ISC_RESULTCLASS_ISCCC + 6)

#define ISCCC_R_NRESULTS 		7	/*%< Number of results */

ISC_LANG_BEGINDECLS

const char *
isccc_result_totext(isc_result_t result);
/*%
 * Convert a isccc_result_t into a string message describing the result.
 */

void
isccc_result_register(void);

ISC_LANG_ENDDECLS

#endif /* ISCCC_RESULT_H */

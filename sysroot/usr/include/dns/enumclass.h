/*
 * Copyright (C) 1998-2024  Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/***************
 ***************
 ***************   THIS FILE IS AUTOMATICALLY GENERATED BY gen.c.
 ***************   DO NOT EDIT!
 ***************
 ***************/

/*! \file */

#ifndef DNS_ENUMCLASS_H
#define DNS_ENUMCLASS_H 1

enum {
	dns_rdataclass_reserved0 = 0,
#define dns_rdataclass_reserved0 \
				((dns_rdataclass_t)dns_rdataclass_reserved0)
	dns_rdataclass_in = 1,
#define dns_rdataclass_in	((dns_rdataclass_t)dns_rdataclass_in)
	dns_rdataclass_chaos = 3,
#define dns_rdataclass_chaos	((dns_rdataclass_t)dns_rdataclass_chaos)
	dns_rdataclass_ch = 3,
#define dns_rdataclass_ch	((dns_rdataclass_t)dns_rdataclass_ch)
	dns_rdataclass_hs = 4,
#define dns_rdataclass_hs	((dns_rdataclass_t)dns_rdataclass_hs)
	dns_rdataclass_none = 254,
#define dns_rdataclass_none	((dns_rdataclass_t)dns_rdataclass_none)
	dns_rdataclass_any = 255
#define dns_rdataclass_any	((dns_rdataclass_t)dns_rdataclass_any)
};

#endif /* DNS_ENUMCLASS_H */

/*
 * Copyright (C) Internet Systems Consortium, Inc. ("ISC")
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, you can obtain one at https://mozilla.org/MPL/2.0/.
 *
 * See the COPYRIGHT file distributed with this work for additional
 * information regarding copyright ownership.
 */

/*! \file */

#ifndef LWRES_PLATFORM_H
#define LWRES_PLATFORM_H 1

/*****
 ***** Platform-dependent defines.
 *****/

/***
 *** Network.
 ***/

/*
 * Define if this system needs the <netinet/in6.h> header file for IPv6.
 */
#undef LWRES_PLATFORM_NEEDNETINETIN6H

/*
 * Define if this system needs the <netinet6/in6.h> header file for IPv6.
 */
#undef LWRES_PLATFORM_NEEDNETINET6IN6H

/*
 * If sockaddrs on this system have an sa_len field, LWRES_PLATFORM_HAVESALEN
 * will be defined.
 */
#undef LWRES_PLATFORM_HAVESALEN

/*
 * If this system has the IPv6 structure definitions, LWRES_PLATFORM_HAVEIPV6
 * will be defined.
 */
#define LWRES_PLATFORM_HAVEIPV6 1

/*
 * If this system is missing in6addr_any, LWRES_PLATFORM_NEEDIN6ADDRANY will
 * be defined.
 */
#undef LWRES_PLATFORM_NEEDIN6ADDRANY

/*
 * If this system is missing in6addr_loopback,
 * LWRES_PLATFORM_NEEDIN6ADDRLOOPBACK will be defined.
 */
#undef LWRES_PLATFORM_NEEDIN6ADDRLOOPBACK

/*
 * If this system has in_addr6, rather than in6_addr,
 * LWRES_PLATFORM_HAVEINADDR6 will be defined.
 */
#undef LWRES_PLATFORM_HAVEINADDR6

/*
 * Defined if unistd.h does not cause fd_set to be declared.
 */
#undef LWRES_PLATFORM_NEEDSYSSELECTH

/*
 * Used to control how extern data is linked; needed for Win32 platforms.
 */
#undef LWRES_PLATFORM_USEDECLSPEC

/*
 * Defined this system needs vsnprintf() and snprintf().
 */
#undef LWRES_PLATFORM_NEEDVSNPRINTF

/*
 * If this system need a modern sprintf() that returns (int) not (char*).
 */


/*! \brief
 * Define if this system needs strtoul.
 */
#undef LWRES_PLATFORM_NEEDSTRTOUL

/*! \brief
 * Define if this system needs strlcpy.
 */
#undef LWRES_PLATFORM_NEEDSTRLCPY

#ifndef LWRES_PLATFORM_USEDECLSPEC
#define LIBLWRES_EXTERNAL_DATA
#else
#ifdef LIBLWRES_EXPORTS
#define LIBLWRES_EXTERNAL_DATA __declspec(dllexport)
#else
#define LIBLWRES_EXTERNAL_DATA __declspec(dllimport)
#endif
#endif

/*
 * Tell Emacs to use C mode on this file.
 * Local Variables:
 * mode: c
 * End:
 */

#endif /* LWRES_PLATFORM_H */

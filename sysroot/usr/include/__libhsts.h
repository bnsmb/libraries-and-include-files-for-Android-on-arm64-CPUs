/*
 * Copyright(c) 2018 Tim Ruehsen
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This file is part of libhsts.
 *
 * Header file for libhsts library routines
 */

#ifndef LIBHSTS_HSTS_H
#define LIBHSTS_HSTS_H

#include <stdio.h>
#include <time.h>

#define HSTS_VERSION "0.1.0"
#define HSTS_VERSION_MAJOR 0
#define HSTS_VERSION_MINOR 1
#define HSTS_VERSION_PATCH 0
#define HSTS_VERSION_NUMBER 0x000100

#ifndef HSTS_API
#if defined BUILDING_HSTS && HAVE_VISIBILITY
#  define HSTS_API __attribute__ ((__visibility__("default")))
#elif defined BUILDING_HSTS && defined _MSC_VER && !defined HSTS_STATIC
#  define HSTS_API __declspec(dllexport)
#elif defined _MSC_VER && !defined HSTS_STATIC
#  define HSTS_API __declspec(dllimport)
#else
#  define HSTS_API
#endif
#endif

#ifdef  __cplusplus
extern "C" {
#endif

#define HSTS_FLAG_INCLUDE_SUBDOMAINS (1<<0)

/**
 * \ingroup libhsts
 *
 * Return codes for HSTS functions.
 * Negative return codes mean failure.
 * Positive values are reserved for non-error return codes.
 */
typedef enum {
	HSTS_SUCCESS = 0,              /*!< Success. */
	HSTS_ERR_INVALID_ARG = -1,     /*!< Invalid argument. */
	HSTS_ERR_NO_MEM = -2,          /*!< Failed to allocate memory. */
   HSTS_ERR_INPUT_FAILURE = -3,   /*!< Failed to read any input data. */
   HSTS_ERR_INPUT_TOO_SHORT = -4, /*!< Not enough input data available. */
   HSTS_ERR_INPUT_TOO_LONG = -5,  /*!< Length of input data is too large. */
   HSTS_ERR_INPUT_FORMAT = -6,    /*!< Input data format is unknown (no HSTS DAFSA format). */
   HSTS_ERR_INPUT_VERSION = -7,   /*!< Input data (DAFSA) version is wrong/unknown. */
   HSTS_ERR_NOT_FOUND = -8,       /*!< Domain could not be found. */
} hsts_status_t;

typedef struct _hsts_st hsts_t;
typedef struct _hsts_entry_st hsts_entry_t;

/* loads HSTS data from file */
HSTS_API hsts_status_t
	hsts_load_file(const char *fname, hsts_t **hsts);

/* loads HSTS data from FILE pointer */
HSTS_API hsts_status_t
	hsts_load_fp(FILE *fp, hsts_t **hsts);

/* free HSTS data object */
HSTS_API void
	hsts_free(hsts_t *hsts);

/* get the dataset for a given domain */
HSTS_API hsts_status_t
	hsts_search(const hsts_t *hsts, const char *domain, int flags, hsts_entry_t **entry);

/* free HSTS data object */
HSTS_API void
	hsts_free_entry(hsts_entry_t *entry);

/* returns whether the 'include subdomain' flag is set or not */
HSTS_API int
	hsts_has_include_subdomains(const hsts_entry_t *entry);

/* returns name of distribution HSTS data file */
HSTS_API const char *
	hsts_dist_filename(void);

/* returns library version string */
HSTS_API const char *
	hsts_get_version(void);

/* checks library version number */
HSTS_API int
	hsts_check_version_number(int version);

#ifdef  __cplusplus
}
#endif

#endif /* LIBHSTS_LIBHSTS_H */

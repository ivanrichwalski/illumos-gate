/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */

/*
 * Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef _FMEVT_H
#define	_FMEVT_H

/*
 * ext-event-transport module - implementation detail.
 */

#ifdef __cplusplus
extern "C" {
#endif

#include <sys/fm/protocol.h>
#include <fm/fmd_api.h>
#include <fm/libfmevent.h>
#include <libnvpair.h>

#include "../../../../../lib/fm/libfmevent/common/fmev_channels.h"

extern fmd_hdl_t *fmevt_hdl;
extern const fmd_prop_t fmevt_props[];

extern void fmevt_init_outbound(fmd_hdl_t *);
extern void fmevt_fini_outbound(fmd_hdl_t *);

extern void fmevt_recv(fmd_hdl_t *, fmd_event_t *, nvlist_t *, const char *);

#ifdef __cplusplus
}
#endif

#endif /* _FMEVT_H */

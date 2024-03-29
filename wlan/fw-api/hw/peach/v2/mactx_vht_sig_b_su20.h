/*
 * Copyright (c) 2023-2024 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef _MACTX_VHT_SIG_B_SU20_H_
#define _MACTX_VHT_SIG_B_SU20_H_

#include "vht_sig_b_su20_info.h"
#define NUM_OF_DWORDS_MACTX_VHT_SIG_B_SU20 1

struct mactx_vht_sig_b_su20 {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   vht_sig_b_su20_info                                       mactx_vht_sig_b_su20_info_details;
#else
             struct   vht_sig_b_su20_info                                       mactx_vht_sig_b_su20_info_details;
#endif
};

#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_LENGTH_OFFSET        0x00000000
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_LENGTH_LSB           0
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_LENGTH_MSB           16
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_LENGTH_MASK          0x0001ffff

#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_VHTB_RESERVED_OFFSET 0x00000000
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_VHTB_RESERVED_LSB    17
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_VHTB_RESERVED_MSB    19
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_VHTB_RESERVED_MASK   0x000e0000

#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_TAIL_OFFSET          0x00000000
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_TAIL_LSB             20
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_TAIL_MSB             25
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_TAIL_MASK            0x03f00000

#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RESERVED_OFFSET      0x00000000
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RESERVED_LSB         26
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RESERVED_MSB         30
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RESERVED_MASK        0x7c000000

#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RX_NDP_OFFSET        0x00000000
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RX_NDP_LSB           31
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RX_NDP_MSB           31
#define MACTX_VHT_SIG_B_SU20_MACTX_VHT_SIG_B_SU20_INFO_DETAILS_RX_NDP_MASK          0x80000000

#endif

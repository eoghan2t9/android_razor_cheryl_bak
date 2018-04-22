/* Copyright (c) 2012-2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _IPAHAL_REG_I_H_
#define _IPAHAL_REG_I_H_

int ipahal_reg_init(enum ipa_hw_type ipa_hw_type);

#define IPA_SETFIELD(val, shift, mask) (((val) << (shift)) & (mask))
#define IPA_SETFIELD_IN_REG(reg, val, shift, mask) \
			(reg |= ((val) << (shift)) & (mask))
#define IPA_GETFIELD_FROM_REG(reg, shift, mask) \
		(((reg) & (mask)) >> (shift))

/* IPA_CLKON_CFG register */
#define IPA_CLKON_CFG_CGC_OPEN_MISC_SHFT 0x3
#define IPA_CLKON_CFG_CGC_OPEN_MISC_BMSK 0x8

/* IPA_ROUTE register */
#define IPA_ROUTE_ROUTE_DIS_SHFT 0x0
#define IPA_ROUTE_ROUTE_DIS_BMSK 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_SHFT 0x1
#define IPA_ROUTE_ROUTE_DEF_PIPE_BMSK 0x3e
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_SHFT 0x6
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_BMSK 0X40
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_SHFT 0x7
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_BMSK 0x1ff80
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_BMSK 0x3e0000
#define IPA_ROUTE_ROUTE_FRAG_DEF_PIPE_SHFT 0x11
#define IPA_ROUTE_ROUTE_DEF_RETAIN_HDR_BMSK  0x1000000
#define IPA_ROUTE_ROUTE_DEF_RETAIN_HDR_SHFT 0x18

/* IPA_ENDP_INIT_HDR_n register */
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_BMSK 0x3f
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_SHFT 0x0
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_BMSK 0x40
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_SHFT 0x6
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_SHFT 0x7
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_BMSK 0x1f80
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_BMSK 0x7e000
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_SHFT 0xd
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_BMSK 0x80000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_SHFT 0x13
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_BMSK 0x3f00000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_SHFT 0x14
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_BMSK 0x4000000
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_SHFT 0x1a
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_BMSK_v2 0x8000000
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_INC_DEAGG_HDR_SHFT_v2 0x1b
#define IPA_ENDP_INIT_HDR_n_HDR_METADATA_REG_VALID_BMSK_v2 0x10000000
#define IPA_ENDP_INIT_HDR_n_HDR_METADATA_REG_VALID_SHFT_v2 0x1c

/* IPA_ENDP_INIT_HDR_EXT_n register */
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANNESS_BMSK 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_ENDIANNESS_SHFT 0x0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_BMSK 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_VALID_SHFT 0x1
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_BMSK 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_SHFT 0x2
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_BMSK 0x8
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAYLOAD_LEN_INC_PADDING_SHFT 0x3
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_BMSK 0x3f0
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_TOTAL_LEN_OR_PAD_OFFSET_SHFT 0x4
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_SHFT 0xa
#define IPA_ENDP_INIT_HDR_EXT_n_HDR_PAD_TO_ALIGNMENT_BMSK_v3_0 0x3c00

/* IPA_ENDP_INIT_AGGR_N register */
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_BMSK	0x1000000
#define IPA_ENDP_INIT_AGGR_n_AGGR_HARD_BYTE_LIMIT_ENABLE_SHFT	0x18
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_BMSK 0x400000
#define IPA_ENDP_INIT_AGGR_n_AGGR_FORCE_CLOSE_SHFT 0x16
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_BMSK	0x200000
#define IPA_ENDP_INIT_AGGR_n_AGGR_SW_EOF_ACTIVE_SHFT	0x15
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_BMSK 0x1f8000
#define IPA_ENDP_INIT_AGGR_n_AGGR_PKT_LIMIT_SHFT 0xf
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_BMSK 0x7c00
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_SHFT 0xa
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_BMSK 0x3e0
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_SHFT 0x5
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_BMSK 0x1c
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_SHFT 0x2
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_BMSK 0x3
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_SHFT 0x0

/* IPA_AGGR_FORCE_CLOSE register */
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK 0x3fffffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT 0
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_BMSK_V3_5 0xfffff
#define IPA_AGGR_FORCE_CLOSE_AGGR_FORCE_CLOSE_PIPE_BITMAP_SHFT_V3_5 0

/* IPA_ENDP_INIT_ROUTE_n register */
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_BMSK 0x1f
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_SHFT 0x0

/* IPA_ENDP_INIT_MODE_n register */
#define IPA_ENDP_INIT_MODE_n_HDR_FTCH_DISABLE_BMSK 0x40000000
#define IPA_ENDP_INIT_MODE_n_HDR_FTCH_DISABLE_SHFT 0x1e
#define IPA_ENDP_INIT_MODE_n_PAD_EN_BMSK 0x20000000
#define IPA_ENDP_INIT_MODE_n_PAD_EN_SHFT 0x1d
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_BMSK 0x10000000
#define IPA_ENDP_INIT_MODE_n_PIPE_REPLICATION_EN_SHFT 0x1c
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_BMSK 0xffff000
#define IPA_ENDP_INIT_MODE_n_BYTE_THRESHOLD_SHFT 0xc
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_BMSK 0x1f0
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_SHFT 0x4
#define IPA_ENDP_INIT_MODE_n_MODE_BMSK 0x7
#define IPA_ENDP_INIT_MODE_n_MODE_SHFT 0x0

/* IPA_ENDP_INIT_NAT_n register */
#define IPA_ENDP_INIT_NAT_n_NAT_EN_BMSK 0x3
#define IPA_ENDP_INIT_NAT_n_NAT_EN_SHFT 0x0

/* IPA_ENDP_INIT_CTRL_n register */
#define IPA_ENDP_INIT_CTRL_n_ENDP_SUSPEND_BMSK 0x1
#define IPA_ENDP_INIT_CTRL_n_ENDP_SUSPEND_SHFT 0x0
#define IPA_ENDP_INIT_CTRL_n_ENDP_DELAY_BMSK 0x2
#define IPA_ENDP_INIT_CTRL_n_ENDP_DELAY_SHFT 0x1

/* IPA_ENDP_INIT_CTRL_SCND_n register */
#define IPA_ENDP_INIT_CTRL_SCND_n_ENDP_DELAY_BMSK 0x2
#define IPA_ENDP_INIT_CTRL_SCND_n_ENDP_DELAY_SHFT 0x1

/* IPA_ENDP_INIT_HOL_BLOCK_EN_n register */
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_RMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_MAX 19
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_EN_BMSK 0x1
#define IPA_ENDP_INIT_HOL_BLOCK_EN_n_EN_SHFT 0x0

/* IPA_ENDP_INIT_HOL_BLOCK_TIMER_n register */
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIMER_BMSK 0xffffffff
#define IPA_ENDP_INIT_HOL_BLOCK_TIMER_n_TIMER_SHFT 0x0

/* IPA_ENDP_INIT_DEAGGR_n register */
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_BMSK 0xFFFF0000
#define IPA_ENDP_INIT_DEAGGR_n_MAX_PACKET_LEN_SHFT 0x10
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_BMSK 0x3F00
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_LOCATION_SHFT 0x8
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_BMSK  0x80
#define IPA_ENDP_INIT_DEAGGR_n_PACKET_OFFSET_VALID_SHFT 0x7
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_BMSK 0x3F
#define IPA_ENDP_INIT_DEAGGR_n_DEAGGR_HDR_LEN_SHFT 0x0

/* IPA_IPA_ENDP_INIT_SEQ_n register */
#define IPA_ENDP_INIT_SEQ_n_DPS_REP_SEQ_TYPE_BMSK 0xf000
#define IPA_ENDP_INIT_SEQ_n_DPS_REP_SEQ_TYPE_SHFT 0xc
#define IPA_ENDP_INIT_SEQ_n_HPS_REP_SEQ_TYPE_BMSK 0xf00
#define IPA_ENDP_INIT_SEQ_n_HPS_REP_SEQ_TYPE_SHFT 0x8
#define IPA_ENDP_INIT_SEQ_n_DPS_SEQ_TYPE_BMSK 0xf0
#define IPA_ENDP_INIT_SEQ_n_DPS_SEQ_TYPE_SHFT 0x4
#define IPA_ENDP_INIT_SEQ_n_HPS_SEQ_TYPE_BMSK 0xf
#define IPA_ENDP_INIT_SEQ_n_HPS_SEQ_TYPE_SHFT 0x0

/* IPA_DEBUG_CNT_REG_m register */
#define IPA_DEBUG_CNT_REG_N_RMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_MAX 15
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_BMSK 0xffffffff
#define IPA_DEBUG_CNT_REG_N_DBG_CNT_REG_SHFT 0x0

/* IPA_ENDP_INIT_CFG_n register */
#define IPA_ENDP_INIT_CFG_n_CS_GEN_QMB_MASTER_SEL_BMSK 0x100
#define IPA_ENDP_INIT_CFG_n_CS_GEN_QMB_MASTER_SEL_SHFT 0x8
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_BMSK 0x78
#define IPA_ENDP_INIT_CFG_n_CS_METADATA_HDR_OFFSET_SHFT 0x3
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_BMSK 0x6
#define IPA_ENDP_INIT_CFG_n_CS_OFFLOAD_EN_SHFT 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_BMSK 0x1
#define IPA_ENDP_INIT_CFG_n_FRAG_OFFLOAD_EN_SHFT 0x0

/* IPA_ENDP_INIT_HDR_METADATA_MASK_n register */
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_BMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_MASK_n_METADATA_MASK_SHFT 0x0

/* IPA_IPA_ENDP_INIT_HDR_METADATA_n register */
#define IPA_ENDP_INIT_HDR_METADATA_n_METADATA_BMSK 0xffffffff
#define IPA_ENDP_INIT_HDR_METADATA_n_METADATA_SHFT 0x0

/* IPA_ENDP_INIT_RSRC_GRP_n register */
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK 0x7
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT 0
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_BMSK_v3_5 0x3
#define IPA_ENDP_INIT_RSRC_GRP_n_RSRC_GRP_SHFT_v3_5 0

/* IPA_SHARED_MEM_SIZE register */
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_BMSK 0xffff0000
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_BADDR_SHFT 0x10
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_BMSK  0xffff
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_SHFT  0x0

/* IPA_DEBUG_CNT_CTRL_n register */
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_PIPE_RULE_BMSK 0x10000000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_PIPE_RULE_SHFT 0x1c
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_BMSK 0x0ff00000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_BMSK_V3_5 0x1ff00000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_RULE_INDEX_SHFT 0x14
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_SOURCE_PIPE_BMSK 0x1f000
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_SOURCE_PIPE_SHFT 0xc
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_PRODUCT_BMSK 0x100
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_PRODUCT_SHFT 0x8
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_TYPE_BMSK 0x70
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_TYPE_SHFT 0x4
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_EN_BMSK 0x1
#define IPA_DEBUG_CNT_CTRL_n_DBG_CNT_EN_SHFT 0x0

/* IPA_FILT_ROUT_HASH_FLUSH register */
#define IPA_FILT_ROUT_HASH_FLUSH_IPv4_FILT_SHFT 12
#define IPA_FILT_ROUT_HASH_FLUSH_IPv4_ROUT_SHFT 8
#define IPA_FILT_ROUT_HASH_FLUSH_IPv6_FILT_SHFT 4
#define IPA_FILT_ROUT_HASH_FLUSH_IPv6_ROUT_SHFT 0

/* IPA_SINGLE_NDP_MODE register */
#define IPA_SINGLE_NDP_MODE_UNDEFINED_BMSK 0xfffffffe
#define IPA_SINGLE_NDP_MODE_UNDEFINED_SHFT 0x1
#define IPA_SINGLE_NDP_MODE_SINGLE_NDP_EN_BMSK 0x1
#define IPA_SINGLE_NDP_MODE_SINGLE_NDP_EN_SHFT 0

/* IPA_QCNCM register */
#define IPA_QCNCM_MODE_UNDEFINED2_BMSK 0xf0000000
#define IPA_QCNCM_MODE_UNDEFINED2_SHFT 0x1c
#define IPA_QCNCM_MODE_VAL_BMSK 0xffffff0
#define IPA_QCNCM_MODE_VAL_SHFT 0x4
#define IPA_QCNCM_UNDEFINED1_BMSK 0xe
#define IPA_QCNCM_UNDEFINED1_SHFT 0x1
#define IPA_QCNCM_MODE_EN_BMSK 0x1
#define IPA_QCNCM_MODE_EN_SHFT 0

/* IPA_ENDP_STATUS_n register */
#define IPA_ENDP_STATUS_n_STATUS_LOCATION_BMSK 0x100
#define IPA_ENDP_STATUS_n_STATUS_LOCATION_SHFT 0x8
#define IPA_ENDP_STATUS_n_STATUS_ENDP_BMSK 0x3e
#define IPA_ENDP_STATUS_n_STATUS_ENDP_SHFT 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_BMSK 0x1
#define IPA_ENDP_STATUS_n_STATUS_EN_SHFT 0x0

/* IPA_ENDP_FILTER_ROUTER_HSH_CFG_n register */
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_ID_SHFT 0
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_ID_BMSK 0x1
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_IP_SHFT 1
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_IP_BMSK 0x2
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_IP_SHFT 2
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_IP_BMSK 0x4
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_PORT_SHFT 3
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_SRC_PORT_BMSK 0x8
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_PORT_SHFT 4
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_DST_PORT_BMSK 0x10
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_PROTOCOL_SHFT 5
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_PROTOCOL_BMSK 0x20
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_METADATA_SHFT 6
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_FILTER_HASH_MSK_METADATA_BMSK 0x40
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED1_SHFT 7
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED1_BMSK 0xff80
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_ID_SHFT 16
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_ID_BMSK 0x10000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_IP_SHFT 17
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_IP_BMSK 0x20000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_IP_SHFT 18
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_IP_BMSK 0x40000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_PORT_SHFT 19
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_SRC_PORT_BMSK 0x80000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_PORT_SHFT 20
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_DST_PORT_BMSK 0x100000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_PROTOCOL_SHFT 21
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_PROTOCOL_BMSK 0x200000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_METADATA_SHFT 22
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_ROUTER_HASH_MSK_METADATA_BMSK 0x400000
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED2_SHFT 23
#define IPA_ENDP_FILTER_ROUTER_HSH_CFG_n_UNDEFINED2_BMSK 0xff800000

/* IPA_RSRC_GRP_XY_RSRC_TYPE_n register */
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_BMSK 0xFF000000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_SHFT 24
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_BMSK 0xFF0000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_SHFT 16
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_BMSK 0xFF00
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_SHFT 8
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_BMSK 0xFF
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_SHFT 0
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_BMSK_V3_5 0x3F000000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MAX_LIM_SHFT_V3_5 24
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_BMSK_V3_5 0x3F0000
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_Y_MIN_LIM_SHFT_V3_5 16
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_BMSK_V3_5 0x3F00
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MAX_LIM_SHFT_V3_5 8
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_BMSK_V3_5 0x3F
#define IPA_RSRC_GRP_XY_RSRC_TYPE_n_X_MIN_LIM_SHFT_V3_5 0


/* IPA_IPA_IPA_RX_HPS_CLIENTS_MIN/MAX_DEPTH_0/1 registers */
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_BMSK(n) (0x7F << (8 * (n)))
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_BMSK_V3_5(n) \
						(0xF << (8 * (n)))
#define IPA_RX_HPS_CLIENTS_MINMAX_DEPTH_X_CLIENT_n_SHFT(n) (8 * (n))

/* IPA_QSB_MAX_WRITES register */
#define IPA_QSB_MAX_WRITES_GEN_QMB_0_MAX_WRITES_BMSK (0xf)
#define IPA_QSB_MAX_WRITES_GEN_QMB_0_MAX_WRITES_SHFT (0)
#define IPA_QSB_MAX_WRITES_GEN_QMB_1_MAX_WRITES_BMSK (0xf0)
#define IPA_QSB_MAX_WRITES_GEN_QMB_1_MAX_WRITES_SHFT (4)

/* IPA_QSB_MAX_READS register */
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_BMSK (0xf)
#define IPA_QSB_MAX_READS_GEN_QMB_0_MAX_READS_SHFT (0)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_BMSK (0xf0)
#define IPA_QSB_MAX_READS_GEN_QMB_1_MAX_READS_SHFT (4)

/* IPA_TX_CFG register */
#define IPA_TX_CFG_TX0_PREFETCH_DISABLE_BMSK_V3_5 (0x1)
#define IPA_TX_CFG_TX0_PREFETCH_DISABLE_SHFT_V3_5 (0)
#define IPA_TX_CFG_TX1_PREFETCH_DISABLE_BMSK_V3_5 (0x2)
#define IPA_TX_CFG_TX1_PREFETCH_DISABLE_SHFT_V3_5 (1)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_BMSK_V3_5 (0x1C)
#define IPA_TX_CFG_PREFETCH_ALMOST_EMPTY_SIZE_SHFT_V3_5 (2)

#endif /* _IPAHAL_REG_I_H_ */

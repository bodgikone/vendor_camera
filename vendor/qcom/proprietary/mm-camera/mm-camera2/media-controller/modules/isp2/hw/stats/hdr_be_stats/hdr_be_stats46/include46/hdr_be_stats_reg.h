/* bg_stats_reg46.h
 *
 * Copyright (c) 2014 Qualcomm Technologies, Inc. All Rights Reserved.
 * Qualcomm Technologies Proprietary and Confidential.
 */

#ifndef __HDR_BE_STATS_REG46_H__
#define __HDR_BE_STATS_REG46_H__

#define HDR_BE_STATS_OFF 0x000009BC
#define HDR_BE_STATS_LEN 7

#define ISP_STATS_HDR_BE_GRID_H    32
#define ISP_STATS_HDR_BE_GRID_V    24

#define HBE_SITE_SEL_BIT  2
#define HBE_FIELD_SEL_BIT 0
#define HBE_SITE_SEL  0 /* 0: Before BPC, 1: Before HDR fusion */
#define HBE_FIELD_SEL 0 /* 0: All lines, 1: F0, 2: F1 */

#define STATS_CFG_OFF 0x000009B8
#define STATS_CFG_MASK ((1 << HBE_SITE_SEL_BIT) |\
                        (3 << HBE_FIELD_SEL_BIT))
#define STATS_CFG_VAL ((HBE_SITE_SEL << HBE_SITE_SEL_BIT) |\
                       (HBE_FIELD_SEL << HBE_FIELD_SEL_BIT))

typedef struct ISP_StatsHdrBe_CfgCmdType {
  /*  STATS_HDR_BE_RGN_OFFSET_CFG   */
  uint32_t        rgnHOffset            :   13;
  uint32_t      /* reserved */          :    3;
  uint32_t        rgnVOffset            :   14;
  uint32_t       /*reserved */          :    2;
  /*  STATS_HDR_BE_RGN_NUM_CFG */
  uint32_t        rgnHNum               :    8;
  uint32_t        /* reserved */        :    8;
  uint32_t        rgnVNum               :    7;
  uint32_t        /* reserved */        :    9;
  /*  STATS_HDR_BE_RGN_SIZE_CFG */
  uint32_t        rgnWidth              :    9;
  uint32_t        /* reserved */        :    7;
  uint32_t        rgnHeight             :    9;
  uint32_t        /* reserved */        :    7;
  /* STATS_HDR_BE_HI_THRESHOLD_CFG_0 */
  uint32_t        rMax                  :    14;
  uint32_t        /* reserved */        :    2;
  uint32_t        grMax                 :    14;
  uint32_t        /* reserved */        :    2;
  /* STATS_HDR_BE_HI_THRESHOLD_CFG_1 */
  uint32_t        bMax                  :    14;
  uint32_t        /* reserved */        :    2;
  uint32_t        gbMax                 :    14;
  uint32_t        /* reserved */        :    2;
  /* STATS_HDR_BE_LO_THRESHOLD_CFG_0 */
  uint32_t        rMin                  :    14;
  uint32_t        /* reserved */        :    2;
  uint32_t        grMin                 :    14;
  uint32_t        /* reserved */        :    2;
  /* STATS_HDR_BE_LO_THRESHOLD_CFG_1 */
  uint32_t        bMin                  :    14;
  uint32_t        /* reserved */        :    2;
  uint32_t        gbMin                 :    14;
  uint32_t        /* reserved */        :    2;
}__attribute__((packed, aligned(4))) ISP_StatsHdrBe_CfgCmdType;

#endif /* __HDR_BE_STATS_REG46_H__ */

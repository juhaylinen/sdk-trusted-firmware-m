/*
 * Copyright (c) 2019-2022 Arm Limited. All rights reserved.
 *
 * Licensed under the Apache License Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * \file device_definition.c
 * \brief This file defines exports the structures based on the peripheral
 * definitions from device_cfg.h.
 * This file is meant to be used as a helper for baremetal
 * applications and/or as an example of how to configure the generic
 * driver structures.
 */

#include "device_definition.h"
#include "platform_base_address.h"

/* Arm ATU driver structures */
#ifdef ATU_S
static const struct atu_dev_cfg_t ATU_DEV_CFG_S = {
    .base = ATU_BASE_S};
struct atu_dev_t ATU_DEV_S = {&ATU_DEV_CFG_S};
#endif

/* Arm UART PL011 driver structures */
#ifdef UART0_PL011_S
static const struct uart_pl011_dev_cfg_t UART0_PL011_DEV_CFG_S = {
    .base = UART0_BASE_S,
    .def_baudrate = DEFAULT_UART_BAUDRATE,
    .def_wlen = UART_PL011_WLEN_8,
    .def_parity = UART_PL011_PARITY_DISABLED,
    .def_stopbit = UART_PL011_STOPBIT_1};
static struct uart_pl011_dev_data_t UART0_PL011_DEV_DATA_S = {
    .state = 0,
    .uart_clk = 0,
    .baudrate = 0};
struct uart_pl011_dev_t UART0_PL011_DEV_S = {&(UART0_PL011_DEV_CFG_S),
                                             &(UART0_PL011_DEV_DATA_S)};
#endif
#ifdef UART0_PL011_NS
static const struct uart_pl011_dev_cfg_t UART0_PL011_DEV_CFG_NS = {
    .base = UART0_BASE_NS,
    .def_baudrate = DEFAULT_UART_BAUDRATE,
    .def_wlen = UART_PL011_WLEN_8,
    .def_parity = UART_PL011_PARITY_DISABLED,
    .def_stopbit = UART_PL011_STOPBIT_1};
static struct uart_pl011_dev_data_t UART0_PL011_DEV_DATA_NS = {
    .state = 0,
    .uart_clk = 0,
    .baudrate = 0};
struct uart_pl011_dev_t UART0_PL011_DEV_NS = {&(UART0_PL011_DEV_CFG_NS),
                                              &(UART0_PL011_DEV_DATA_NS)};
#endif

/* RSS PPC driver structures */
#ifdef PPC_RSS_MAIN0_S
static struct ppc_rss_dev_cfg_t PPC_RSS_MAIN0_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_MAIN0};
static struct ppc_rss_dev_data_t PPC_RSS_MAIN0_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_MAIN0_DEV_S = {
    &PPC_RSS_MAIN0_CFG_S,
    &PPC_RSS_MAIN0_DATA_S };
#endif

#ifdef PPC_RSS_MAIN_EXP0_S
static struct ppc_rss_dev_cfg_t PPC_RSS_MAIN_EXP0_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_MAIN_EXP0};
static struct ppc_rss_dev_data_t PPC_RSS_MAIN_EXP0_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_MAIN_EXP0_DEV_S = {
    &PPC_RSS_MAIN_EXP0_CFG_S,
    &PPC_RSS_MAIN_EXP0_DATA_S };
#endif

#ifdef PPC_RSS_MAIN_EXP1_S
static struct ppc_rss_dev_cfg_t PPC_RSS_MAIN_EXP1_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_MAIN_EXP1};
static struct ppc_rss_dev_data_t PPC_RSS_MAIN_EXP1_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_MAIN_EXP1_DEV_S = {
    &PPC_RSS_MAIN_EXP1_CFG_S,
    &PPC_RSS_MAIN_EXP1_DATA_S };
#endif

#ifdef PPC_RSS_MAIN_EXP2_S
static struct ppc_rss_dev_cfg_t PPC_RSS_MAIN_EXP2_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_MAIN_EXP2};
static struct ppc_rss_dev_data_t PPC_RSS_MAIN_EXP2_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_MAIN_EXP2_DEV_S = {
    &PPC_RSS_MAIN_EXP2_CFG_S,
    &PPC_RSS_MAIN_EXP2_DATA_S };
#endif

#ifdef PPC_RSS_MAIN_EXP3_S
static struct ppc_rss_dev_cfg_t PPC_RSS_MAIN_EXP3_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_MAIN_EXP3};
static struct ppc_rss_dev_data_t PPC_RSS_MAIN_EXP3_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_MAIN_EXP3_DEV_S = {
    &PPC_RSS_MAIN_EXP3_CFG_S,
    &PPC_RSS_MAIN_EXP3_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH0_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH0_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH0};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH0_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH0_DEV_S = {
    &PPC_RSS_PERIPH0_CFG_S,
    &PPC_RSS_PERIPH0_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH1_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH1_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH1};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH1_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH1_DEV_S = {
    &PPC_RSS_PERIPH1_CFG_S,
    &PPC_RSS_PERIPH1_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH_EXP0_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH_EXP0_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH_EXP0};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH_EXP0_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH_EXP0_DEV_S = {
    &PPC_RSS_PERIPH_EXP0_CFG_S,
    &PPC_RSS_PERIPH_EXP0_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH_EXP1_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH_EXP1_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH_EXP1};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH_EXP1_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH_EXP1_DEV_S = {
    &PPC_RSS_PERIPH_EXP1_CFG_S,
    &PPC_RSS_PERIPH_EXP1_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH_EXP2_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH_EXP2_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH_EXP2};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH_EXP2_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH_EXP2_DEV_S = {
    &PPC_RSS_PERIPH_EXP2_CFG_S,
    &PPC_RSS_PERIPH_EXP2_DATA_S };
#endif

#ifdef PPC_RSS_PERIPH_EXP3_S
static struct ppc_rss_dev_cfg_t PPC_RSS_PERIPH_EXP3_CFG_S = {
    .sacfg_base  = RSS_SACFG_BASE_S,
    .nsacfg_base = RSS_NSACFG_BASE_NS,
    .ppc_name = PPC_RSS_PERIPH_EXP3};
static struct ppc_rss_dev_data_t PPC_RSS_PERIPH_EXP3_DATA_S = {
    .sacfg_ns_ppc  = 0,
    .sacfg_sp_ppc  = 0,
    .nsacfg_nsp_ppc = 0,
    .int_bit_mask = 0,
    .is_initialized = false };
struct ppc_rss_dev_t PPC_RSS_PERIPH_EXP3_DEV_S = {
    &PPC_RSS_PERIPH_EXP3_CFG_S,
    &PPC_RSS_PERIPH_EXP3_DATA_S };
#endif

/* System counters */
#ifdef SYSCOUNTER_CNTRL_ARMV8_M_S

#if SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_INT > \
    SYSCOUNTER_ARMV8_M_SCALE_VAL_INT_MAX
#error SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_INT is invalid.
#endif
#if SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_FRACT > \
    SYSCOUNTER_ARMV8_M_SCALE_VAL_FRACT_MAX
#error SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_FRACT is invalid.
#endif
#if SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_INT > \
    SYSCOUNTER_ARMV8_M_SCALE_VAL_INT_MAX
#error SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_INT is invalid.
#endif
#if SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_FRACT > \
    SYSCOUNTER_ARMV8_M_SCALE_VAL_FRACT_MAX
#error SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_FRACT is invalid.
#endif

static const struct syscounter_armv8_m_cntrl_dev_cfg_t
SYSCOUNTER_CNTRL_ARMV8_M_DEV_CFG_S = {
    .base = SYSCNTR_CNTRL_BASE_S,
    .scale0.integer  = SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_INT,
    .scale0.fixed_point_fraction = SYSCOUNTER_ARMV8_M_DEFAULT_SCALE0_FRACT,
    .scale1.integer  = SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_INT,
    .scale1.fixed_point_fraction = SYSCOUNTER_ARMV8_M_DEFAULT_SCALE1_FRACT
};
static struct syscounter_armv8_m_cntrl_dev_data_t
SYSCOUNTER_CNTRL_ARMV8_M_DEV_DATA_S = {
    .is_initialized = false
};
struct syscounter_armv8_m_cntrl_dev_t SYSCOUNTER_CNTRL_ARMV8_M_DEV_S = {
    &(SYSCOUNTER_CNTRL_ARMV8_M_DEV_CFG_S),
    &(SYSCOUNTER_CNTRL_ARMV8_M_DEV_DATA_S)
};
#endif

#ifdef SYSCOUNTER_READ_ARMV8_M_S
static const struct syscounter_armv8_m_read_dev_cfg_t
SYSCOUNTER_READ_ARMV8_M_DEV_CFG_S = {
    .base = SYSCNTR_READ_BASE_S,
};
struct syscounter_armv8_m_read_dev_t SYSCOUNTER_READ_ARMV8_M_DEV_S = {
    &(SYSCOUNTER_READ_ARMV8_M_DEV_CFG_S),
};
#endif

/* System timers */
#ifdef SYSTIMER0_ARMV8_M_S
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER0_ARMV8_M_DEV_CFG_S = {
    .base = SYSTIMER0_ARMV8_M_BASE_S,
    .default_freq_hz = SYSTIMER0_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER0_ARMV8_M_DEV_DATA_S = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER0_ARMV8_M_DEV_S = {
    &(SYSTIMER0_ARMV8_M_DEV_CFG_S),
    &(SYSTIMER0_ARMV8_M_DEV_DATA_S)
};
#endif

#ifdef SYSTIMER0_ARMV8_M_NS
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER0_ARMV8_M_DEV_CFG_NS = {
    .base = SYSTIMER0_ARMV8_M_BASE_NS,
    .default_freq_hz = SYSTIMER0_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER0_ARMV8_M_DEV_DATA_NS = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER0_ARMV8_M_DEV_NS = {
    &(SYSTIMER0_ARMV8_M_DEV_CFG_NS),
    &(SYSTIMER0_ARMV8_M_DEV_DATA_NS)
};
#endif

#ifdef SYSTIMER1_ARMV8_M_S
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER1_ARMV8_M_DEV_CFG_S = {
    .base = SYSTIMER1_ARMV8_M_BASE_S,
    .default_freq_hz = SYSTIMER1_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER1_ARMV8_M_DEV_DATA_S = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER1_ARMV8_M_DEV_S = {
    &(SYSTIMER1_ARMV8_M_DEV_CFG_S),
    &(SYSTIMER1_ARMV8_M_DEV_DATA_S)
};
#endif

#ifdef SYSTIMER1_ARMV8_M_NS
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER1_ARMV8_M_DEV_CFG_NS = {
    .base = SYSTIMER1_ARMV8_M_BASE_NS,
    .default_freq_hz = SYSTIMER1_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER1_ARMV8_M_DEV_DATA_NS = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER1_ARMV8_M_DEV_NS = {
    &(SYSTIMER1_ARMV8_M_DEV_CFG_NS),
    &(SYSTIMER1_ARMV8_M_DEV_DATA_NS)
};
#endif

#ifdef SYSTIMER2_ARMV8_M_S
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER2_ARMV8_M_DEV_CFG_S = {
    .base = SYSTIMER2_ARMV8_M_BASE_S,
    .default_freq_hz = SYSTIMER2_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER2_ARMV8_M_DEV_DATA_S = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER2_ARMV8_M_DEV_S = {
    &(SYSTIMER2_ARMV8_M_DEV_CFG_S),
    &(SYSTIMER2_ARMV8_M_DEV_DATA_S)
};
#endif

#ifdef SYSTIMER2_ARMV8_M_NS
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER2_ARMV8_M_DEV_CFG_NS = {
    .base = SYSTIMER2_ARMV8_M_BASE_NS,
    .default_freq_hz = SYSTIMER2_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER2_ARMV8_M_DEV_DATA_NS = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER2_ARMV8_M_DEV_NS = {
    &(SYSTIMER2_ARMV8_M_DEV_CFG_NS),
    &(SYSTIMER2_ARMV8_M_DEV_DATA_NS)
};
#endif

#ifdef SYSTIMER3_ARMV8_M_S
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER3_ARMV8_M_DEV_CFG_S = {
    .base = SYSTIMER3_ARMV8_M_BASE_S,
    .default_freq_hz = SYSTIMER3_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER3_ARMV8_M_DEV_DATA_S = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER3_ARMV8_M_DEV_S = {
    &(SYSTIMER3_ARMV8_M_DEV_CFG_S),
    &(SYSTIMER3_ARMV8_M_DEV_DATA_S)
};
#endif

#ifdef SYSTIMER3_ARMV8_M_NS
static const struct systimer_armv8_m_dev_cfg_t
SYSTIMER3_ARMV8_M_DEV_CFG_NS = {
    .base = SYSTIMER3_ARMV8_M_BASE_NS,
    .default_freq_hz = SYSTIMER3_ARMV8M_DEFAULT_FREQ_HZ
};
static struct systimer_armv8_m_dev_data_t
SYSTIMER3_ARMV8_M_DEV_DATA_NS = {
    .is_initialized = false
};
struct systimer_armv8_m_dev_t SYSTIMER3_ARMV8_M_DEV_NS = {
    &(SYSTIMER3_ARMV8_M_DEV_CFG_NS),
    &(SYSTIMER3_ARMV8_M_DEV_DATA_NS)
};
#endif

/* System Watchdogs */
#ifdef SYSWDOG_ARMV8_M_S
static const struct syswdog_armv8_m_dev_cfg_t
SYSWDOG_ARMV8_M_DEV_CFG_S = {
    .base = SYSWDOG_ARMV8_M_CNTRL_BASE_S
};
struct syswdog_armv8_m_dev_t SYSWDOG_ARMV8_M_DEV_S = {
    &(SYSWDOG_ARMV8_M_DEV_CFG_S)
};
#endif

#ifdef SYSWDOG_ARMV8_M_NS
static const struct syswdog_armv8_m_dev_cfg_t
SYSWDOG_ARMV8_M_DEV_CFG_NS = {
    .base = SYSWDOG_ARMV8_M_CNTRL_BASE_NS
};
struct syswdog_armv8_m_dev_t SYSWDOG_ARMV8_M_DEV_NS = {
    &(SYSWDOG_ARMV8_M_DEV_CFG_NS)
};
#endif

/* ARM MPC RSS driver structures */
#ifdef MPC_VM0_S
static const struct mpc_sie_dev_cfg_t MPC_VM0_DEV_CFG_S = {
    .base = MPC_VM0_BASE_S};
static struct mpc_sie_dev_data_t MPC_VM0_DEV_DATA_S = {
    .range_list = 0,
    .nbr_of_ranges = 0,
    .is_initialized = false };
struct mpc_sie_dev_t MPC_VM0_DEV_S = {
    &(MPC_VM0_DEV_CFG_S),
    &(MPC_VM0_DEV_DATA_S)};
#endif

#ifdef MPC_VM1_S
static const struct mpc_sie_dev_cfg_t MPC_VM1_DEV_CFG_S = {
    .base = MPC_VM1_BASE_S};
static struct mpc_sie_dev_data_t MPC_VM1_DEV_DATA_S = {
    .range_list = 0,
    .nbr_of_ranges = 0,
    .is_initialized = false };
struct mpc_sie_dev_t MPC_VM1_DEV_S = {
    &(MPC_VM1_DEV_CFG_S),
    &(MPC_VM1_DEV_DATA_S)};
#endif

/* Message Handling Units (MHU) */
#ifdef MHU_AP_TO_RSS
struct mhu_v2_x_dev_t MHU_AP_TO_RSS_DEV = {
    MHU0_RECEIVER_BASE_S,
    MHU_V2_X_RECEIVER_FRAME};
#endif

#ifdef MHU_RSS_TO_AP
struct mhu_v2_x_dev_t MHU_RSS_TO_AP_DEV = {
    MHU0_SENDER_BASE_S,
    MHU_V2_X_SENDER_FRAME};
#endif

#ifdef MHU_SCP_TO_RSS
struct mhu_v2_x_dev_t MHU_SCP_TO_RSS_DEV = {
    MHU2_RECEIVER_BASE_S,
    MHU_V2_X_RECEIVER_FRAME};
#endif

#ifdef MHU_RSS_TO_SCP
struct mhu_v2_x_dev_t MHU_RSS_TO_SCP_DEV = {
    MHU2_SENDER_BASE_S,
    MHU_V2_X_SENDER_FRAME};
#endif

#ifdef KMU_S
static struct kmu_dev_cfg_t KMU_DEV_CFG_S = {
    .base = KMU_BASE_S
};
struct kmu_dev_t KMU_DEV_S = {
    .cfg = &(KMU_DEV_CFG_S)
};
#endif

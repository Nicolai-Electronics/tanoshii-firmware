/**
 * Copyright (c) 2023 Nicolai Electronics
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#include <stdbool.h>
#include <stdint.h>

#include <esp_err.h>

// I2C address
#define MMA8452Q_ADDR 0x1C

// Registers
#define MMA8452Q_REG_STATUS 0x00
#define MMA8452Q_REG_OUT_X_MSB 0x01
#define MMA8452Q_REG_OUT_X_LSB 0x02
#define MMA8452Q_REG_OUT_Y_MSB 0x03
#define MMA8452Q_REG_OUT_Y_LSB 0x04
#define MMA8452Q_REG_OUT_Z_MSB 0x05
#define MMA8452Q_REG_OUT_Z_LSB 0x06
#define MMA8452Q_REG_SYSMOD 0x0B
#define MMA8452Q_REG_INT_SOURCE 0x0C
#define MMA8452Q_REG_WHO_AM_I 0x0D
#define MMA8452Q_REG_XYZ_DATA_CFG 0x0E
#define MMA8452Q_REG_HP_FILTER_CUTOFF 0x0F
#define MMA8452Q_REG_PL_STATUS 0x10
#define MMA8452Q_REG_PL_CFG 0x11
#define MMA8452Q_REG_PL_COUNT 0x12
#define MMA8452Q_REG_PL_BF_ZCOMP 0x13
#define MMA8452Q_REG_P_L_THS_REG 0x14
#define MMA8452Q_REG_FF_MT_CFG 0x15
#define MMA8452Q_REG_FF_MT_SRC 0x16
#define MMA8452Q_REG_FF_MT_THS 0x17
#define MMA8452Q_REG_FF_MT_COUNT 0x18
#define MMA8452Q_REG_TRANSIENT_SRC 0x1E
#define MMA8452Q_REG_TRANSIENT_THS 0x1F
#define MMA8452Q_REG_TRANSIENT_COUNT 0x20
#define MMA8452Q_REG_PULSE_CFG 0x21
#define MMA8452Q_REG_PULSE_SRC 0x22
#define MMA8452Q_REG_PULSE_THSX 0x23
#define MMA8452Q_REG_PULSE_THSY 0x24
#define MMA8452Q_REG_PULSE_THSZ 0x25
#define MMA8452Q_REG_PULSE_TMLT 0x26
#define MMA8452Q_REG_PULSE_LTCY 0x27
#define MMA8452Q_REG_PULSE_WIND 0x28
#define MMA8452Q_REG_ASLP_COUNT 0x29
#define MMA8452Q_REG_CTRL1 0x2A
#define MMA8452Q_REG_CTRL2 0x2B
#define MMA8452Q_REG_CTRL3 0x2C
#define MMA8452Q_REG_CTRL4 0x2D
#define MMA8452Q_REG_CTRL5 0x2E
#define MMA8452Q_REG_OFF_X 0x2F
#define MMA8452Q_REG_OFF_Y 0x30
#define MMA8452Q_REG_OFF_Z 0x31

#define MMA8452Q_WHO_AM_I_VALUE 0x2A

typedef struct _MMA8452Q {
    // Configuration
    int     i2c_bus;
    uint8_t i2c_address;
} mma8452q_t;

esp_err_t mma8452q_init(mma8452q_t *device);

#ifdef __cplusplus
}
#endif //__cplusplus

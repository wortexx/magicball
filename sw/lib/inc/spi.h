// Copyright 2022 ETH Zurich and University of Bologna.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Nils Wistoff <nwistoff@iis.ee.ethz.ch>
// Paul Scheffler <paulsc@iis.ee.ethz.ch>

#pragma once

#include <stdint.h>
#include "config.h"

// Registers below can be aligned to a byte, word, dword etc
// SPI_BYTE_ALIGN provides the number of bytes it is aligned to

// -- User OBI SPI Peripheral (Engine) Register Offsets --
#define SPI_ENGINE_REG_CTRL     0x00
#define SPI_ENGINE_REG_STATUS   0x04
#define SPI_ENGINE_REG_DATA_TX  0x08
#define SPI_ENGINE_REG_CLK_DIV  0x0C

// Engine Control Register Bits
#define SPI_ENGINE_CTRL_ENABLE      (1 << 0)
#define SPI_ENGINE_CTRL_START_XFER  (1 << 1)
#define SPI_ENGINE_CTRL_CPOL        (1 << 2)
#define SPI_ENGINE_CTRL_CPHA        (1 << 3)

// Engine Status Register Bits
#define SPI_ENGINE_STATUS_BUSY      (1 << 0)

// -- User SPI Ctrl (CS/DC outputs) Register Offset & Bits --
#define SPI_CTRL_GPIO_REG_OFFSET 0x000
#define SPI_CTRL_GPIO_CS1_N_VAL (1 << 0) 
#define SPI_CTRL_GPIO_CS2_N_VAL (1 << 1) 
#define SPI_CTRL_GPIO_DC_VAL    (1 << 2) 

// Register offsets
#define SPI_RBR_REG_OFFSET           (0*SPI_BYTE_ALIGN) // Receive Buffer Register
#define SPI_THR_REG_OFFSET           (0*SPI_BYTE_ALIGN) // Transmitter Holding Register
#define SPI_INTR_ENABLE_REG_OFFSET   (1*SPI_BYTE_ALIGN)
#define SPI_INTR_IDENT_REG_OFFSET    (2*SPI_BYTE_ALIGN)
#define SPI_FIFO_CONTROL_REG_OFFSET  (2*SPI_BYTE_ALIGN)
#define SPI_LINE_CONTROL_REG_OFFSET  (3*SPI_BYTE_ALIGN)
#define SPI_MODEM_CONTROL_REG_OFFSET (4*SPI_BYTE_ALIGN)
#define SPI_LINE_STATUS_REG_OFFSET   (5*SPI_BYTE_ALIGN)
#define SPI_MODEM_STATUS_REG_OFFSET  (6*SPI_BYTE_ALIGN)
#define SPI_SCRATCH_REG_OFFSET       (7*SPI_BYTE_ALIGN)
#define SPI_DLAB_LSB_REG_OFFSET      (0*SPI_BYTE_ALIGN)
#define SPI_DLAB_MSB_REG_OFFSET      (1*SPI_BYTE_ALIGN)

// Register fields
#define SPI_LINE_STATUS_DATA_READY_BIT 0
#define SPI_LINE_STATUS_THR_EMPTY_BIT 5
#define SPI_LINE_STATUS_TMIT_EMPTY_BIT 6

void spi_init();

// int spi_read_ready();

void spi_write(uint8_t byte);

void spi_write_str(void *src, uint32_t len);

void spi_write_flush();

// uint8_t spi_read();

// void spi_read_str(void *dst, uint32_t len);

// void spi_putchar(char byte);

// char spi_getchar();

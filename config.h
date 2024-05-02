// Copyright 2023 parallacks (@parallacks)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */


#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP3     // USART TX pin
#define SERIAL_USART_RX_PIN GP4      // USART RX pin
// #define SPLIT_HAND_PIN GP29
#define EE_HANDS
// #define MASTER_LEFT
#define BOOTMAGIC_LITE_ROW_RIGHT 4
#define BOOTMAGIC_LITE_COLUMN_RIGHT 4
#define RGBLED_NUM 2
#define RGBLED_SPLIT { 1, 1 }
#define RGB_DI_PIN GP12
#define RGBLIGHT_DEFAULT_HUE 127


/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

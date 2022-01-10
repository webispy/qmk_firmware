// Copyright 2021 Inho Oh <webispy@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x0000
#define DEVICE_VER   0x0001
#define MANUFACTURER webispy
#define PRODUCT      split01

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS (7 + 8)

/**
 * STM32F401CCU6
 *
 *                   +-----+
 *                +--| USB |--+
 *       x --  3V |  |     |  | 5V  -- x (RGB 5V)
 *       x -- GND |  +-----+  | GND -- x (RGB GND)
 *   Row 1 -- B12 |           | B10 -- x (RGB DATA)
 *   Row 2 -- B13 |    UKEY   | B2
 *   Row 3 -- B14 |     []    | B1
 *   Row 4 -- B15 | BOOT0 RST | B0
 *   Row 5 --  A8 |   []  []  | A7  -- RCol 1
 *       x --  A9 |           | A6  -- RCol 2
 *       x -- A10 |           | A5  -- RCol 3
 *       x -- A11 |           | A4  -- RCol 4
 *       x -- A12 |           | A3  -- RCol 5
 *  LCol 1 -- A15 |           | A2  -- RCol 6
 *  LCol 2 --  B3 |           | A1  -- RCol 7
 *  LCol 3 --  B4 |           | A0  -- RCol 8
 *  LCol 4 --  B5 |           | RST -- x
 *  LCol 5 --  B6 |           | C15
 *  LCol 6 --  B7 |           | C14
 *  LCol 7 --  B8 | Blue  Red | C13 -- Blue LED
 *         --  B9 |  LED  LED | BAT -- x
 *                +-----------+
 */

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { B12, B13, B14, B15, A8 }
#define MATRIX_COL_PINS { A15, B3, B4, B5, B6, B7, B8,  A7, A6, A5, A4, A3, A2, A1, A0 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION ROW2COL

/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
//#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

//#define LED_NUM_LOCK_PIN B0
//#define LED_CAPS_LOCK_PIN B1
//#define LED_SCROLL_LOCK_PIN B2
//#define LED_COMPOSE_PIN B3
//#define LED_KANA_PIN B4

//#define BACKLIGHT_PIN B7
//#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_BREATHING

#define RGB_DI_PIN B10
#ifdef RGB_DI_PIN
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
#    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
#    define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
//#    define RGBLIGHT_EFFECT_BREATHING
//#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
//#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//#    define RGBLIGHT_EFFECT_SNAKE
//#    define RGBLIGHT_EFFECT_KNIGHT
//#    define RGBLIGHT_EFFECT_CHRISTMAS
//#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#    define RGBLIGHT_EFFECT_RGB_TEST
//#    define RGBLIGHT_EFFECT_ALTERNATING
/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
//#    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
//#    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
//#    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#define RGBLED_NUM 69
#define RGBLIGHT_LED_MAP { \
         0,  1,  2,  3,  4,  5,  6, \
        12, 11, 10,  9,  8,  7, \
        13, 14, 15, 16, 17, 18, \
        25, 24, 23, 22, 21, 20, 19,\
        26, 27, 28, 29, 30, 31, \
            32, 33, 34, 35, 36, 37, 38, \
        46, 45, 44, 43, 42, 41, 40, 39, \
            47, 48, 49, 50, 51, 52, 53, \
        61, 60, 59, 58, 57, 56, 55, 54, \
            62, 63, 64, 65, 66, 67, 68 \
    }
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

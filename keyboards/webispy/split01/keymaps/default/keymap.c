// Copyright 2021 Inho Oh <webispy@gmail.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// KC_GESC = ESC and Shift+ESC(~)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
	KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  KC_6,          KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                 KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_B,  KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_RSFT,
	MO(_FN), KC_LGUI, KC_LALT, KC_BTN1, KC_BTN2, KC_SPC,               KC_SPC, KC_RALT, KC_RCTL, MO(_FN), KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT(
	KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,         KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
	KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,         KC_NO, KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
	KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
	KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_PGUP, KC_NO,
	KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_PGDN, KC_END
    )
};

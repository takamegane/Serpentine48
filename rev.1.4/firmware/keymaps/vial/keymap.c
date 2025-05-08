// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

   const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_TAB,          KC_Q,           KC_W,         KC_E,          KC_R,          KC_T,          KC_HOME,       KC_MUTE, KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
		RCTL_T(KC_CAPS), KC_A,           KC_S,         KC_D,          KC_F,          KC_G,          KC_END,        KC_ESC,  KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
		KC_LSFT,         KC_Z,           KC_X,         KC_C,          KC_V,          KC_B,                                  KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_SLSH,    RSFT(KC_ENT),
		                                               KC_PSCR,       KC_LOPT,       MO(1),         KC_BSPC,       KC_SPC,  MO(2),      KC_RALT,    KC_PSCR
	),
	[1] = LAYOUT(
		KC_TAB,          LSFT(KC_1),     LSFT(KC_2),   LSFT(KC_3),    LSFT(KC_4),    LSFT(KC_5),    KC_TRNS,       KC_TRNS, LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), KC_BSPC,
		KC_LCTL,         LCTL(KC_A),     LCTL(KC_S),   LCTL(KC_D),    LCTL(KC_F),    LCTL(KC_G),    KC_TRNS,       KC_TRNS, KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT,    KC_NO,      KC_NO,
		KC_LSFT,         LCTL(KC_Z),     LCTL(KC_X),   LCTL(KC_C),    LCTL(KC_V),    LCTL(KC_B),                            KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
		                                               KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, MO(3),      KC_TRNS,    KC_TRNS
	),
	[2] = LAYOUT(
		KC_ESC,         KC_1,           KC_2,         KC_3,          KC_4,          KC_5,          KC_TRNS,       KC_TRNS, KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_DEL,
		KC_LCTL,         KC_MINS,        KC_EQL,       KC_LBRC,       KC_RBRC,       KC_BSLS,       KC_TRNS,       KC_TRNS, KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,
		KC_LSFT,         LSFT(KC_MINS),  LSFT(KC_EQL), LSFT(KC_LBRC), LSFT(KC_RBRC), LSFT(KC_BSLS),                         KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
		                                               KC_TRNS,       KC_TRNS,       MO(3),         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS
	),
	[3] = LAYOUT(
		KC_NO,           KC_NO,          KC_NO,        KC_NO,         KC_NO,         KC_NO,         KC_TRNS,       KC_TRNS, KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
		KC_NO,           KC_NO,          KC_NO,        KC_NO,         KC_NO,         KC_NO,         KC_TRNS,       KC_TRNS, KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
		KC_NO,           KC_NO,          KC_NO,        KC_NO,         KC_NO,         KC_NO,                                 KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_PSCR,
		                                               KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS
	)
};



const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_WH_D, KC_WH_U),
            ENCODER_CCW_CW(KC_PGUP, KC_PGDN), 
            ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), 
            ENCODER_CCW_CW(KC_UP, KC_DOWN), 
            ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
            ENCODER_CCW_CW(KC_UP, KC_DOWN) 
          },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
          },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
          },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS), 
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS),
            ENCODER_CCW_CW(KC_TRNS, KC_TRNS) 
          },
};

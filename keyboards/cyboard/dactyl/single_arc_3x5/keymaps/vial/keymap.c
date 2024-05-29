/* Copyright 2023 Cyboard LLC (@Cyboard-DigitalTailor)
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_single_arc_3x5(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                   KC_LGUI, KC_ENT, KC_DEL,           KC_BSPC,  KC_SPC,  MO(1)
    ),

    [1] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, KC_HOME, KC_UP,   KC_END,  _______,
        _______, _______, _______, _______, _______,                           _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [2] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [3] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [4] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [5] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [6] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [7] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [8] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    ),

    [9] = LAYOUT_single_arc_3x5(
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______,                           _______, _______, _______, _______, _______,
                                   _______, _______, _______,         _______, _______, _______
    )
};

// keymap.c — Scylla QMK Keymap
// Keyboard: Scylla (6×4 split + 5 thumb keys per side = 58 keys)
// Didn't test this exact file, but I told Claude to only reformat
// the file and not change any keycodes, so it should be fine.
//
// Layers:
//   0 — Base (Colemak-DH variant)
//   1 — Navigation / Numpad
//   2 — Symbols / Function keys
//   3 — Mouse / Media

// Notes:
//   - ä/ö/ü use UC() and require UNICODE_ENABLE = yes in rules.mk
//   - Set the Unicode input mode in config.h, e.g.:
//       #define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX
//       #define UNICODE_SELECTED_MODES UNICODE_MODE_MACOS
//       #define UNICODE_SELECTED_MODES UNICODE_MODE_WINCOMPOSE  // requires WinCompose on Windows

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // -----------------------------------------------------------------------
    // Layer 0 — Base (Colemak-DH)
    // -----------------------------------------------------------------------
    [0] = LAYOUT_split_4x6_5(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_SLEP, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,       KC_SCLN, KC_MINS, KC_Y,    KC_U,    KC_L,    KC_J,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,       KC_QUOT, KC_O,    KC_I,    KC_E,    KC_N,    KC_M,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,       KC_BSLS, KC_SLSH, KC_DOT,  KC_COMM, KC_H,    KC_K,
        TT(1),   KC_LCTL, KC_LSFT, KC_SPC,  KC_LALT,            TT(2),   KC_RCTL, KC_BSPC, SC_SENT, KC_ESC
    ),

    // -----------------------------------------------------------------------
    // Layer 1 — Navigation / Numpad
    // -----------------------------------------------------------------------
    [1] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, S(KC_LBRC), KC_TRNS, KC_TRNS,
        KC_PPLS, KC_PMNS, KC_7,    KC_8,    KC_9,    KC_PEQL,   KC_TRNS, KC_E,    KC_W,    KC_UP,   KC_B,    KC_O,
        KC_PAST, KC_0,    KC_4,    KC_5,    KC_6,    KC_PDOT,   KC_TRNS, KC_END,  KC_RGHT, KC_DOWN, KC_LEFT, KC_HOME,
        KC_TRNS, KC_PSLS, KC_1,    KC_2,    KC_3,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_A,    S(KC_RBRC), KC_I, KC_TRNS,
        TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,              TT(3),   KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS
    ),

    // -----------------------------------------------------------------------
    // Layer 2 — Symbols / Function keys
    // -----------------------------------------------------------------------
    [2] = LAYOUT_split_4x6_5(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,
        KC_TRNS, KC_TRNS, S(KC_7), S(KC_8), KC_GRV,  KC_LBRC,   S(KC_1), KC_LBRC, S(KC_QUOT), KC_SLSH, KC_PMNS, KC_RBRC,
        KC_TRNS, KC_TRNS, S(KC_4), S(KC_5), S(KC_6), S(KC_9),   KC_QUOT, KC_SCLN, KC_QUOT, KC_EQL,  S(KC_MINS), S(KC_0),
        KC_TRNS, KC_TRNS, S(KC_1), S(KC_2), S(KC_3), KC_NO,     S(KC_BSLS), S(KC_SLSH), S(KC_DOT), S(KC_COMM), KC_PPLS, KC_NO,
        TT(3),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    // -----------------------------------------------------------------------
    // Layer 3 — Mouse / Media
    // -----------------------------------------------------------------------
    [3] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,       KC_PGUP,       KC_TRNS,        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_UP,   KC_TRNS,    KC_TRNS,   KC_TRNS, UC(0x00FC), KC_TRNS,       KC_MS_WH_UP,   KC_TRNS,        KC_TRNS,
        KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN1, UC(0x00E4), UC(0x00F6), KC_MS_WH_RIGHT, KC_MS_WH_DOWN, KC_MS_WH_LEFT, KC_MS_BTN2,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS,    KC_TRNS,       KC_PGDN,       KC_TRNS,        KC_TRNS,
        TO(0),   KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,               TO(0),   KC_TRNS,    KC_TRNS,       KC_TRNS,       KC_TRNS
    ),
};

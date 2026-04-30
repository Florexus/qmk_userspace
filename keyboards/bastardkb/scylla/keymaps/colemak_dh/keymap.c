// keymap.c — Scylla QMK Keymap
// Converted from scylla_layout.json (Vial format)
// Keyboard: Scylla (6×4 split + 5 thumb keys per side)
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

// ---------------------------------------------------------------------------
// Keymap
// The Scylla LAYOUT macro expects 60 positions (30 per half):
//
//  Left half:
//   Row 0:         L00 L01 L02 L03 L04 L05
//   Row 1:         L10 L11 L12 L13 L14 L15
//   Row 2:         L20 L21 L22 L23 L24 L25
//   Row 3:         L30 L31 L32 L33 L34 L35
//   Thumb cluster: KC_NO LT0 LT1 LT2 LT3 LT4   (KC_NO = unused matrix position)
//
//  Right half:
//   Row 0:         R05 R04 R03 R02 R01 R00
//   Row 1:         R15 R14 R13 R12 R11 R10
//   Row 2:         R25 R24 R23 R22 R21 R20
//   Row 3:         R35 R34 R33 R32 R31 R30
//   Thumb cluster: KC_NO RT0 RT1 RT2 RT3 RT4   (KC_NO = unused matrix position)
// ---------------------------------------------------------------------------

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // -----------------------------------------------------------------------
    // Layer 0 — Base (Colemak-DH)
    // -----------------------------------------------------------------------
    [0] = LAYOUT(
        // Left half
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,
        KC_CAPS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,
        KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,
        KC_NO,   /*thumbs:*/ TT(1),   KC_LCTL, KC_LSFT, KC_SPC,  KC_LALT,

        // Right half
        KC_SLEP, KC_0,    KC_9,    KC_8,    KC_7,    KC_6,
        KC_SCLN, KC_MINS, KC_Y,    KC_U,    KC_L,    KC_J,
        KC_QUOT, KC_O,    KC_I,    KC_E,    KC_N,    KC_M,
        KC_BSLS, KC_SLSH, KC_DOT,  KC_COMM, KC_H,    KC_K,
        KC_NO,   /*thumbs:*/ TT(2),   KC_RCTL, KC_BSPC, KC_SFTENT, KC_ESC
    ),

    // -----------------------------------------------------------------------
    // Layer 1 — Navigation / Numpad  (hold TT(1) from base)
    // -----------------------------------------------------------------------
    [1] = LAYOUT(
        // Left half
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_PPLS, KC_PMNS, KC_7,    KC_8,    KC_9,    KC_PEQL,
        KC_PAST, KC_0,    KC_4,    KC_5,    KC_6,    KC_PDOT,
        KC_TRNS, KC_PSLS, KC_1,    KC_2,    KC_3,    KC_TRNS,
        KC_NO,   /*thumbs:*/ TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO,

        // Right half
        KC_TRNS, KC_TRNS, KC_TRNS, S(KC_LBRC), KC_TRNS, KC_TRNS,
        KC_TRNS, KC_E,    KC_W,    KC_UP,   KC_B,    KC_O,
        KC_TRNS, KC_END,  KC_RGHT, KC_DOWN, KC_LEFT, KC_HOME,
        KC_TRNS, KC_TRNS, KC_A,    S(KC_RBRC), KC_I, KC_TRNS,
        KC_NO,   /*thumbs:*/ TT(3),   KC_TRNS, KC_DEL,  KC_TRNS, KC_TRNS
    ),

    // -----------------------------------------------------------------------
    // Layer 2 — Symbols / Function keys  (hold TT(2) from base)
    // -----------------------------------------------------------------------
    [2] = LAYOUT(
        // Left half
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
        KC_TRNS, KC_TRNS, S(KC_7), S(KC_8), KC_GRV,  KC_LBRC,
        KC_TRNS, KC_TRNS, S(KC_4), S(KC_5), S(KC_6), S(KC_9),
        KC_TRNS, KC_TRNS, S(KC_1), S(KC_2), S(KC_3), KC_NO,
        KC_NO,   /*thumbs:*/ TT(3),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        // Right half
        KC_F12,  KC_F11,  KC_F10,  KC_F9,   KC_F8,   KC_F7,
        S(KC_1), KC_LBRC, S(KC_QUOT), KC_SLSH, KC_PMNS, KC_RBRC,
        KC_QUOT, KC_SCLN, KC_QUOT, KC_EQL,  S(KC_MINS), S(KC_0),
        S(KC_BSLS), S(KC_SLSH), S(KC_DOT), S(KC_COMM), KC_PPLS, KC_NO,
        KC_NO,   /*thumbs:*/ TO(0),   KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),

    // -----------------------------------------------------------------------
    // Layer 3 — Mouse / Media  (reached via TT(3) from layers 1 or 2)
    // -----------------------------------------------------------------------
    [3] = LAYOUT(
        // Left half
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_UP, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_MS_BTN1,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, /*thumbs:*/ TO(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

        // Right half
        KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,
        KC_TRNS, UC(0x00FC), KC_TRNS, KC_MS_WH_UP, KC_TRNS, KC_TRNS,
        UC(0x00E4), UC(0x00F6), KC_MS_WH_RIGHT, KC_MS_WH_DOWN, KC_MS_WH_LEFT, KC_MS_BTN2,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS,
        KC_TRNS, /*thumbs:*/ TO(0),   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

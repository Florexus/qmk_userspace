// keymap.c — Scylla QMK Keymap
// Converted from scylla_layout.json (Vial format)
// Keyboard: Scylla (6×4 split + 5 thumb keys per side = 58 keys)
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

// Modifier for alpha keys to replace them with a mod-tap shift and key press key,
// to make them sensitive to PERMISSIVE_HOLD and HOLD_ON_OTHER_KEY_PRESS
// instead of using autoshift.
// #define AS(kc) MT(MOD_LSFT, kc)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // -----------------------------------------------------------------------
    // Layer 0 — Base (Colemak-DH)
    // -----------------------------------------------------------------------
    [0] = LAYOUT_split_4x6_5(
        KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,               KC_F7,       KC_F8,       KC_F9,       KC_F10,       KC_F11,     KC_F12,
        KC_TAB,      KC_Q,        KC_W,        KC_F,        KC_P,        KC_B,                KC_J,        KC_L,        KC_U,        KC_Y,        KC_MINS,     S(KC_1),
        KC_CAPS,     KC_A,        KC_R,        KC_S,        KC_T,        KC_G,                KC_M,        KC_N,        KC_E,        KC_I,        KC_O,        KC_QUOT,
        KC_LGUI,     KC_Z,        KC_X,        KC_C,        KC_D,        KC_V,                KC_K,        KC_H,        KC_COMM,     KC_DOT,      S(KC_SLSH),  KC_RSFT,
                                               KC_LSFT,     KC_SPC,      MO(1),               MO(2),       SC_SENT,     KC_BSPC,
                                                            KC_LALT,     KC_LCTL,             KC_RCTL,     KC_ESC
    ),

    // [0] = LAYOUT_split_4x6_5(
    //     KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,               KC_F7,       KC_F8,       KC_F9,       KC_F10,       KC_F11,     KC_F12,
    //     KC_TAB,      LT(3, KC_Q),    LT(3, KC_W),    LT(3, KC_F),    LT(3, KC_P),    LT(3, KC_B),            LT(3, KC_J),    LT(3, KC_L),    LT(3, KC_U),    LT(3, KC_Y),     KC_MINS,     S(KC_1),
    //     KC_CAPS,     LT(3, KC_A),    LT(3, KC_R),    LT(3, KC_S),    LT(3, KC_T),    LT(3, KC_G),            LT(3, KC_M),    LT(3, KC_N),    LT(3, KC_E),    LT(3, KC_I),     LT(3, KC_O),    KC_QUOT,
    //     KC_LGUI,     LT(3, KC_Z),    LT(3, KC_X),    LT(3, KC_C),    LT(3, KC_D),    LT(3, KC_V),            LT(3, KC_K),    LT(3, KC_H),    KC_COMM,     KC_DOT,       S(KC_SLSH),  KC_RSFT,
    //                                            KC_LSFT,     KC_SPC,      MO(1),               MO(2),       SC_SENT,     KC_BSPC,
    //                                                         KC_LALT,     KC_LCTL,             KC_RCTL,     KC_ESC
    // ),


    // -----------------------------------------------------------------------
    // Layer 1 — Numpad / Vim-oriented Navigation
    // -----------------------------------------------------------------------
    [1] = LAYOUT_split_4x6_5(
        KC_SLEP,     KC_TRNS,     KC_MUTE,     KC_VOLD,     KC_VOLU,     KC_MPLY,             KC_TRNS,     KC_WWW_BACK, KC_WWW_FORWARD,KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_PPLS,     KC_PMNS,     KC_7,        KC_8,        KC_9,        S(KC_SCLN),          KC_TRNS,     KC_B,        KC_UP,       KC_W,         KC_E,       KC_TRNS,
        KC_PAST,     KC_0,        KC_4,        KC_5,        KC_6,        KC_PDOT,             KC_HOME,     KC_LEFT,     KC_V,        KC_RGHT,      KC_END,     KC_TRNS,
        KC_TRNS,     KC_PSLS,     KC_1,        KC_2,        KC_3,        KC_PEQL,             KC_TRNS,     S(KC_LBRC),  KC_DOWN,     S(KC_RBRC),   KC_TRNS,    KC_TRNS,
                                               KC_NO,       KC_NO,       TO(0),               TT(3),       KC_RSFT,     KC_DEL,
                                                            KC_NO,       KC_NO,               KC_TRNS,     KC_TRNS
    ),

    // -----------------------------------------------------------------------
    // Layer 2 — Symbols & Function keys
    // -----------------------------------------------------------------------
    [2] = LAYOUT_split_4x6_5(
        KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,             KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,
        KC_TRNS,     KC_TRNS,     S(KC_7),     S(KC_8),     KC_GRV,      KC_LBRC,             KC_RBRC,     KC_PPLS,     S(KC_GRV),   S(KC_BSLS),   KC_SCLN,    KC_TRNS,
        KC_TRNS,     KC_TRNS,     S(KC_4),     S(KC_5),     S(KC_6),     S(KC_9),             S(KC_0),     S(KC_MINS),  KC_EQL,      KC_SLSH,      S(KC_SCLN), S(KC_QUOT),
        KC_TRNS,     KC_TRNS,     S(KC_1),     S(KC_2),     S(KC_3),     KC_NO,               KC_NO,       KC_TRNS,     S(KC_COMM),  S(KC_DOT),    KC_BSLS,    KC_TRNS,
                                               KC_TRNS,     KC_TRNS,     TT(3),               TO(0),       KC_NO,       KC_NO,
                                                            KC_TRNS,     KC_TRNS,             KC_NO,       KC_NO
    ),

    // -----------------------------------------------------------------------
    // Layer 3 — Mouse & Swiss keys
    // -----------------------------------------------------------------------
    [3] = LAYOUT_split_4x6_5(
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_PGUP,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_MS_UP,   KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_MS_WH_UP,KC_TRNS,    UC(0x00FC), KC_TRNS,
        KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT,KC_MS_BTN1,     KC_MS_BTN2,KC_MS_WH_LEFT,KC_MS_WH_DOWN,KC_MS_WH_RIGHT,UC(0x00F6),UC(0x00E4),
        KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS, KC_PGDN,    KC_TRNS,    KC_TRNS,    KC_TRNS,
                                      KC_TRNS,    KC_TRNS,    TO(0),          TO(0),   KC_TRNS, KC_TRNS,
                                                  KC_TRNS,    KC_TRNS,        KC_TRNS, KC_TRNS
    ),
    // [0] = LAYOUT_split_4x6_5(
    //     KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,               KC_F7,       KC_F8,       KC_F9,       KC_F10,       KC_F11,     KC_F12,
    //     KC_TAB,      S(KC_Q),    S(KC_W),    S(KC_F),    S(KC_P),    S(KC_B),            S(KC_J),    S(KC_L),    S(KC_U),    S(KC_Y),     UC(0x00F6),     UC(0x00FC),
    //     KC_CAPS,     S(KC_A),    S(KC_R),    S(KC_S),    S(KC_T),    S(KC_G),            S(KC_M),    S(KC_N),    S(KC_E),    S(KC_I),     S(KC_O),    UC(0x00E4),
    //     KC_LGUI,     S(KC_Z),    S(KC_X),    S(KC_C),    S(KC_D),    S(KC_V),            S(KC_K),    S(KC_H),    KC_COMM,     KC_DOT,       S(KC_SLSH),  KC_RSFT,
    //                                            KC_LSFT,     KC_SPC,      MO(1),               MO(2),       SC_SENT,     KC_BSPC,
    //                                                         KC_LALT,     KC_LCTL,             KC_RCTL,     KC_ESC
    // ),
};

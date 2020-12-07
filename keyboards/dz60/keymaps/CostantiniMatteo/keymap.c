#include QMK_KEYBOARD_H

enum unicode_names {
    A_GRAVE_MAJ,
    A_ACUTA_MAJ,
    E_GRAVE_MAJ,
    E_ACUTA_MAJ,
    I_GRAVE_MAJ,
    I_ACUTA_MAJ,
    O_GRAVE_MAJ,
    O_ACUTA_MAJ,
    U_GRAVE_MAJ,
    U_ACUTA_MAJ
};

const uint32_t PROGMEM unicode_map[] = {
    [A_GRAVE_MAJ] = 0x00C0,
    [A_ACUTA_MAJ] = 0x00C1,
    [E_GRAVE_MAJ] = 0x00C8,
    [E_ACUTA_MAJ] = 0x00C9,
    [I_GRAVE_MAJ] = 0x00CC,
    [I_ACUTA_MAJ] = 0x00CD,
    [O_GRAVE_MAJ] = 0x00D2,
    [O_ACUTA_MAJ] = 0x00D3,
    [U_GRAVE_MAJ] = 0x00D9,
    [U_ACUTA_MAJ] = 0x00DA
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_directional(
        KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SLSH, KC_UP, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,  KC_SPC,  KC_SPC,           MO(2), MO(1), KC_LEFT, KC_DOWN,   KC_RGHT
    ),

    LAYOUT_directional(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_INS,
        KC_TAB, KC_TRNS, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XP(3, 2), XP(5, 4), XP(9, 8),
        KC_CAPS, KC_TRNS, KC_PMNS, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, XP(7, 6), XP(1, 0),          KC_ENT,
        KC_LSFT, KC_TRNS, KC_P0, KC_P1,  KC_P2, KC_P3,  KC_PDOT, KC_PCMM, KC_TRNS, KC_TRNS, KC_PSCR, KC_PSCR, KC_PGUP, KC_DEL,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_PENT, KC_PENT, KC_PENT,          KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_END
    ),
    LAYOUT_directional(
        KC_TRNS,  BL_DEC,   BL_TOGG,   BL_INC,   BL_STEP,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,  UC_MOD,  XP(4, 5),  _______, KC_DEL,
        KC_TAB, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XP(2, 3), XP(4, 5), XP(8, 9),
        KC_NUMLOCK, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, XP(6, 7), XP(0, 1),          KC_ENT,
        KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  RESET, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_MPLY, KC_VOLU, KC_MUTE,
        KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC, KC_SPC, KC_SPC,          KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_MNXT
    )
};

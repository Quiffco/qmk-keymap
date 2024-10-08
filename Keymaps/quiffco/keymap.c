#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
	KC_Q, KC_W, KC_E, KC_R, KC_T,				KC_Y, KC_U, KC_I, KC_O, KC_P,
	LSFT_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), KC_F, KC_G,			KC_H, KC_J, KC_K, RALT_T(KC_L), RGUI_T(KC_SCLN),
	KC_Z, KC_X, KC_C, KC_V, KC_B,				KC_N, KC_M, KC_COMM, KC_DOT, KC_ENT,
	                            KC_LCTL, LT(1,KC_BSPC), LT(2,KC_SPC), KC_RSFT),

	[1] = LAYOUT_split_3x5_2(
	KC_NUBS, KC_7, KC_8, KC_9, KC_0,			KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN3,
	KC_MINS, KC_4, KC_5, KC_6, KC_LBRC,			KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_CAPS,
	KC_EQL, KC_1, KC_2, KC_3, KC_RBRC,			DT_PRNT, DT_UP, DT_DOWN, KC_NO, KC_GRV,
	                            KC_DEL, KC_TRNS, KC_BTN1, KC_TRNS),

	[2] = LAYOUT_split_3x5_2(
	KC_LALT, KC_F7, KC_F8, KC_F9, KC_F10,			KC_PGUP, KC_HOME, KC_UP, KC_END, KC_NO,
	KC_LSFT, KC_F4, KC_F5, KC_F6, KC_F11,			KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT,
	KC_LCTL, KC_F1, KC_F2, KC_F3, KC_F12,			KC_MUTE, KC_VOLD, KC_VOLU, KC_NO, KC_SLSH,
	                            KC_NUHS, KC_TRNS, KC_TRNS, KC_TAB),

	[3] = LAYOUT_split_3x5_2(
	KC_TRNS, KC_TRNS, KC_TRNS, LT(1,KC_R), KC_TRNS,		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_A, KC_S, KC_D, KC_F, KC_G,				KC_H, KC_J, KC_K, KC_L, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	                            KC_GRV, KC_BSPC, KC_SPC, KC_TAB),

};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM iop_combo[] = {KC_I, KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM ty_combo[] = {KC_T, KC_Y, COMBO_END};
const uint16_t PROGMEM bn_combo[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM bkspcspc_combo[] = {LT(1,KC_BSPC),  LT(2,KC_SPC), COMBO_END};
const uint16_t PROGMEM xcv_combo[] = {KC_X, KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM zslsh_combo[] = {KC_Z, KC_ENT, COMBO_END};
combo_t key_combos[] = {
    COMBO(qw_combo, KC_ESC),
    COMBO(iop_combo, KC_PSCR),
    COMBO(ty_combo, TG(3)),
    COMBO(bkspcspc_combo, TO(0)),
    COMBO(xcv_combo, KC_MPLY),
    COMBO(zslsh_combo, QK_BOOT),
};


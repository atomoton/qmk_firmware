#include "planck.h"

extern keymap_config_t keymap_config;


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, 
		KC_EQL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_ENT, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_UP, KC_RSFT, 
		M(0), KC_LCTL, KC_LALT, KC_LGUI, MO(1), KC_SPC, KC_SPC, MO(2), KC_QUES, KC_LEFT, KC_DOWN, KC_RGHT),

	KEYMAP(
		KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL, 
		KC_MINS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, 
		KC_TRNS, KC_LBRC, KC_RBRC, KC_LABK, KC_RABK, KC_NO, KC_NO, KC_NO, KC_NO, KC_QUOT, KC_HOME, KC_TRNS, 
		M(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_UNDS, KC_TRNS, KC_SLSH, KC_MPRV, KC_END, KC_MNXT),

	KEYMAP(
		KC_TILD, KC_F11, KC_F12, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_PSCR, 
		KC_PLUS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_NO, KC_SCLN, KC_BSLS, 
		KC_TRNS, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_PIPE, KC_DQUO, KC_PGUP, KC_TRNS, 
		M(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TAB, KC_TAB, KC_TRNS, KC_BSLS, KC_VOLD, KC_PGDN, KC_VOLU)

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

	switch (id) {
		case 0:
			if (record->event.pressed) {
				return MACRO( D(LCTL), D(C), U(LCTL), U(C), END );
			}
			break;
		case 1:
			if (record->event.pressed) {
				return MACRO( D(LCTL), D(X), U(LCTL), U(X), END );
			}
			break;
		case 2:
			if (record->event.pressed) {
				return MACRO( D(LCTL), D(V), U(LCTL), U(V), END );
			}
			break;
	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}

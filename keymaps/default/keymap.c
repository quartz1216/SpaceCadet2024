#include QMK_KEYBOARD_H

enum {
	UD_RUN = SAFE_RANGE,
	LANG,
	UD_CC,
	UD_CIW,
	UD_PRE,
	UD_NEXT,
	UD_EDLN

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x12(
		TG(2),	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_GRV,
		KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_LBRC,
		KC_LCTL,KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,KC_QUOT,
		KC_LSFT,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,KC_MINS,
		KC_LGUI,KC_ESC,LT(0,LANG),MO(1),KC_SPC,KC_LALT,KC_BSPC,KC_ENT,	KC_DEL,	KC_EQL,	KC_BSLS,KC_RBRC),
	[1] = LAYOUT_ortho_5x12(
		KC_F1,	KC_F2,	KC_F3,	KC_F4,	KC_F5,	KC_F6,	KC_F7,	KC_F8,	KC_F9,	KC_F10,	KC_F11,	KC_F12,
		_______,KC_HOME,KC_UP,	KC_END,	KC_PGUP,_______,_______,_______,_______,_______,KC_MPRV,KC_MNXT,
		_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,_______,_______,_______,_______,_______,_______,
		_______,KC_DEL,	KC_BSPC,KC_ENT, _______,_______,_______,_______,_______,_______,_______,_______,
		_______,KC_PAUS,_______,_______,KC_MPLY,_______,_______,_______,_______,_______,_______,_______),
	[2] = LAYOUT_ortho_5x12(
		_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
		_______,KC_WH_U,KC_MS_U,KC_WH_D,KC_BTN3,_______,_______,_______,_______,_______,_______,_______,
		_______,KC_MS_L,KC_MS_D,KC_MS_R,KC_BTN2,_______,KC_BTN4,KC_WH_D,KC_WH_U,KC_BTN5,_______,_______,
		KC_ACL0,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
		_______,_______,_______,_______,KC_BTN1,_______,_______,_______,_______,_______,_______,_______)};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {

		case UD_RUN:
			if (record->tap.count && record->event.pressed) {
				tap_code16(A(KC_SPC));
				return false;
			}
		case LT(0,LANG):
			if(record->tap.count && record -> event.pressed){
				tap_code16(C(KC_SPC));
			}else if(record->event.pressed){
				tap_code16(G(KC_SPC));
			}
			return false;
			break;

		case UD_CIW:
			if(record->event.pressed){
				tap_code16(C(KC_LEFT));
				tap_code16(C(S(KC_RGHT)));
				tap_code16(KC_DEL);
				return false;
			}
			break;

		case UD_CC:
			if(record->event.pressed){
				tap_code16(KC_HOME);
				tap_code16(S(KC_END));
				tap_code16(KC_DEL);
				return false;
			}
			break;

		case UD_PRE:
			if(record->event.pressed){
				tap_code16(C(KC_LEFT));
				return false;
			}
			break;

		case UD_NEXT:
			if(record->event.pressed){
				tap_code16(C(KC_RGHT));
				return false;
			}
			break;
		
		case UD_EDLN:
			if(record->event.pressed){
				tap_code16(S(KC_END));
				tap_code16(KC_DEL);
				return false;
			}
	}
	return true;
}
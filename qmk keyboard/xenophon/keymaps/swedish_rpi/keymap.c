#include "xenophon.h"
#include "keymap_swedish.h"

#define _BL 0
#define _FL 1
#define _FFL 2

/* layer 1
 * ,------------------------------------------------+ +------------------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |INSERT| |VLM UP|   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  | DEL  | |VLMDWN|   Y  |   U  |   I  |   O  |   P  |  Å   |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | CAPS |   A  |   S  |   D  |   F  |   G  |  UP  | | PLAY |   H  |   J  |   K  |   L  |   Ö  |  Ä   |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * |Shift |   >  |   Z  |   X  |   C  |   V  | DOWN | | HOME |   B  |   N  |   M  |   ,  |   .  |SHIFT |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | Ctrl | WIN  |  ¨   |  '   | Alt  |Space |ENTER | |ENTER |space |ALTGR |  +   |   -  | WIN  | ctrl |
 * `------------------------------------------------+ +------------------------------------------------'
*/
/* layer 2
 * ,------------------------------------------------+ +------------------------------------------------.
 * | ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 | Bksp |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | TAB  |   Q  |  UP  |   E  |   R  |   T  | DEL  | |   7  |   8  |   9  |   I  |   O  |   P  |  Å   |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | CAPS | LEFT | DOWN | RIGHT|   F  |   G  | pgup | |   4  |   5  |   6  |   K  |   L  |   Ö  |  Ä   |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * |Shift |   >  |   Z  |   X  |   C  |   V  | pgdwn| |   1  |   2  |  3   |   M  |   ,  |   .  |SHIFT |
 * |------+------+------+------+------+------+------+ +------+------+------+------+------+------+------|
 * | Ctrl | WIN  | REC1 | PLY1 | ALT  |Space |ENTER | |ENTER |Space |ALTGR | PLY2 | REC2 | WIN  | ctrl |
 * `------------------------------------------------+ +------------------------------------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_ESC, 	KC_1, 		KC_2, 		KC_3, 		KC_4, 		KC_5, 		KC_INS, 					KC_VOLU, 				KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 		KC_BSPC, 
		KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_T, 		KC_DEL, 					KC_VOLD, 				KC_Y, 		KC_U, 		KC_I, 		KC_O, 		KC_P, 		SE_ARNG, 
		KC_CAPS, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 		KC_UP, 						KC_MPLY, 				KC_H, 		KC_J, 		KC_K, 		KC_L, 		SE_ODIA, 	SE_ADIA, 
		KC_LSFT, 	KC_NUBS, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_DOWN, 					KC_HOME, 				KC_B, 		KC_N, 		KC_M, 		KC_COMM, 	KC_DOT, 	KC_LSFT, 
		KC_LCTL, 	KC_LGUI, 	KC_RBRC, 	SE_QUOT, 	KC_LALT, 	KC_SPC, 	LT(1, KC_ENT), 				LT(1, KC_ENT),			KC_SPC, 	KC_RALT, 	SE_PLUS, 	SE_MINS, 	KC_RGUI, 	KC_LCTL ),

	[1] = LAYOUT(
		KC_TRNS, 	KC_F1, 		KC_F2, 		KC_F3, 		KC_F4, 		KC_F5, 	 	KC_F6, 						KC_F7, 		KC_F8, 		KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_TRNS,
		KC_TRNS, 	KC_TRNS, 	KC_UP, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS,					KC_P7, 		KC_P8, 		KC_BTN1, 	KC_MS_UP, 	KC_BTN2, 	KC_TRNS, 	KC_TRNS, 
		KC_TRNS, 	KC_LEFT,	KC_DOWN, 	KC_RIGHT, 	KC_TRNS, 	KC_TRNS, 	KC_PGUP, 					KC_P4, 		KC_P5, 		KC_MS_LEFT, KC_MS_DOWN,	KC_MS_RIGHT,KC_TRNS, 	KC_TRNS, 
		KC_TRNS,	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_COPY, 	KC_PASTE, 	KC_PGDN, 					KC_P1, 		KC_P2, 		KC_P3, 		KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 
		KC_TRNS, 	KC_TRNS, 	DM_REC1, 	DM_PLY1, 	KC_TRNS, 	KC_TRNS, 	KC_TRNS, 					KC_TRNS, 	KC_TRNS, 	KC_TRNS, 	DM_PLY2, 	DM_REC2, 	KC_TRNS, 	KC_TRNS ),

	[2] = LAYOUT(
		KC_ESC, 	KC_1, 		KC_2, 		KC_3, 		KC_4, 		KC_5, 		KC_INS, 					KC_VOLU, 				KC_6, 		KC_7, 		KC_8, 		KC_9, 		KC_0, 		KC_BSPC, 
		KC_TAB, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_T, 		KC_DEL, 					KC_VOLD, 				KC_Y, 		KC_U, 		KC_I, 		KC_O, 		KC_P, 		SE_ARNG, 
		KC_CAPS, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 		KC_UP, 						KC_MPLY, 				KC_H, 		KC_J, 		KC_K, 		KC_L, 		SE_ODIA, 	SE_ADIA, 
		KC_LSFT, 	KC_NUBS, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_DOWN, 					KC_HOME, 				KC_B, 		KC_N, 		KC_M, 		KC_COMM, 	KC_DOT, 	KC_LSFT, 
		KC_LCTL, 	KC_LGUI, 	KC_RBRC, 	SE_QUOT, 	KC_LALT, 	KC_SPC, 	LT(1, KC_ENT), 				LT(1, KC_ENT),			KC_SPC, 	KC_RALT, 	SE_PLUS, 	SE_MINS, 	KC_RGUI, 	KC_LCTL )

};

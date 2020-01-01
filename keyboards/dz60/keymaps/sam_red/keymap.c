#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _FUNCTIONS 1
#define _EMOJI 2
#define _THAI 3
#define _SYS 4

enum custom_keycodes {
  SHRUG = SAFE_RANGE,
  TABLE_FLIP,
  TABLE_BACK,
  LENNY,
  THAI_SUPA,
  THAI_MAX,
  THAI_ZACK,
  THAI_FERN,
  THAI_SAM,
   THAI_NGOO
};

// #define KC_ KC_TRNS
#define _______ KC_TRNS


// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
  set_unicode_input_mode(UC_OSX); // Mac OSX
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Default Layer
   * ,--------------------------------------------------------------------------.
   * |   ~|   1|   2|   3|   4|   5|   6|   7|   8|   9|   0|   -|   =|       BS|
   * |--------------------------------------------------------------------------|
   * |   Tab|   Q|   W|   E|   R|   T|   Y|   U|   I|   O|   P|   [|   ]|      \|
   * |--------------------------------------------------------------------------|
   * |     Esc|   A|   S|   D|   F|   G|   H|   J|   K|   L|   ;|   '|       Ent|
   * |--------------------------------------------------------------------------|
   * |Shift     |   Z|   X|   C|   V|   B|   N|   M|   ,|   .|   /|        Shift|
   * |--------------------------------------------------------------------------|
   * | Ctrl|  Alt|  Gui|   Space|   _Fn|     Space|    Gui|   Alt|   Ctrl|   Alt|
   * `--------------------------------------------------------------------------.
   */

  [_QWERTY] = LAYOUT(
		     KC_GRV, KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6, KC_7,  KC_8,  KC_9,  KC_0,  KC_MINS,  KC_EQL,  KC_NO, KC_BSPC,
		     KC_TAB,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T, KC_Y,  KC_U,  KC_I,  KC_O,  KC_P,  KC_LBRC, KC_RBRC, KC_BSLS,
		     KC_ESC,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G, KC_H,  KC_J,  KC_K,  KC_L,  KC_SCLN, KC_QUOT, KC_ENT,
		     KC_LSFT, KC_NO,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B, KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_NO,
		     KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, MO(_FUNCTIONS), KC_RGUI,  KC_RALT, KC_NO, KC_RCTL, KC_MUTE
		     ),

  /* Functions Layer
   * ,--------------------------------------------------------------------------.
   * |_SYS|  F1|  F2|  F3|  F4|  F5|  F6|  F7|  F8|  F9|  F0| F11| F12|      DEL|
   * |--------------------------------------------------------------------------|
   * |      |Mute|VolU|_EMO|    |_THAI|    | PgU|  Up| PgD|    |    |    |      |
   * |--------------------------------------------------------------------------|
   * |    CAPS|    |VolD|    |    |    |    |Left|Down| Rgt|    |    |          |
   * |--------------------------------------------------------------------------|
   * |          |    |    |    |    |    |    |    |Home| End|    |             |
   * |--------------------------------------------------------------------------|
   * |     |     |     |        |   _Fn|          |       |      |       |      |
   * `--------------------------------------------------------------------------.
   */

  [_FUNCTIONS] = LAYOUT(
			MO(_SYS), KC_F1,  KC_F2,  KC_F3,   KC_F4,  KC_F5,  KC_F6, KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO, KC_DEL,
			KC_TRNS,  KC_MUTE,  KC_VOLU,  MO(_EMOJI),  KC_TRNS,  MO(_THAI), KC_TRNS,  KC_PGUP,  KC_UP,  KC_PGDN,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
			KC_CAPS,    KC_TRNS,  KC_VOLD,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS,    KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_HOME, KC_END,  KC_TRNS, KC_TRNS, KC_TRNS,
			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FUNCTIONS), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
			),

  /* emoji Layer
   * ,---------------------------------------------------------------------------.
   * |     |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |---------------------------------------------------------------------------|
   * |      |    |    |_EMO|     |FLIP|    |    |    |    |    |    |    |       |
   * |---------------------------------------------------------------------------|
   * |        |    |Shru|    |    |    |    |    |    | LEN|    |    |           |
   * |---------------------------------------------------------------------------|
   * |          |    |    |    |    |BACK|    |    |    |    |    |              |
   * |---------------------------------------------------------------------------|
   * |     |     |     |        |   _Fn|          |       |      |       |       |
   * `---------------------------------------------------------------------------.
   */

  [_EMOJI] = LAYOUT(
		    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(_EMOJI),  KC_TRNS,  TABLE_FLIP, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_CAPS,    KC_TRNS,  SHRUG,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  LENNY,  KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  TABLE_BACK, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		    KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, MO(_FUNCTIONS),  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		    ),

  /* thai Layer
   * ,---------------------------------------------------------------------------.
   * |     |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |---------------------------------------------------------------------------|
   * |      |    |    |    |     |_THAI|    |    |    |    |SUPA|    |    |      |
   * |---------------------------------------------------------------------------|
   * |        |    | SAM|    |FERN|    |    |    |    |    |    |    |           |
   * |---------------------------------------------------------------------------|
   * |          |ZACK|    |    |    |    |NNPP|MAX|    |    |    |               |
   * |---------------------------------------------------------------------------|
   * |     |     |     |        |   _Fn|          |       |      |       |       |
   * `---------------------------------------------------------------------------.
   */

  [_THAI] = LAYOUT(
		   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  MO(_EMOJI), KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  THAI_SUPA,  KC_TRNS, KC_TRNS, KC_TRNS,
		   KC_CAPS,    KC_TRNS,  THAI_SAM,  KC_TRNS,  THAI_FERN,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		   KC_TRNS, KC_TRNS, THAI_ZACK,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, THAI_NGOO,  THAI_MAX,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FUNCTIONS),  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		   ),

  /* System Layer
   * ,---------------------------------------------------------------------------.
   * |_SYS |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |---------------------------------------------------------------------------|
   * |      |    |    |    |RESET|   |    |    |    |    |    |    |    |        |
   * |---------------------------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |    |    |    |    |           |
   * |---------------------------------------------------------------------------|
   * |          |    |    |    |    |    |    |    |    |    |    |              |
   * |---------------------------------------------------------------------------|
   * |     |     |     |        |   _Fn|          |       |      |       |       |
   * `---------------------------------------------------------------------------.
   */

  /*
15        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_BSPC,
14        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
13        KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
14        KC_LSFT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_NO,
11        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, KC_RALT, MO(2), KC_NO, MO(1), KC_RCTL),
   */

  [_SYS] = LAYOUT(
		  MO(_SYS), KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
		  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		  KC_CAPS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS,
		  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_FUNCTIONS), KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
		  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // https://r12a.github.io/app-conversion/
  switch (keycode) {
  case SHRUG:
    if (record->event.pressed) {
      // when keycode QMKBEST is pressed
      send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF"); // ¯\_(ツ)_/¯
    } else {
      // when keycode QMKBEST is released
    }
    break;
  case TABLE_FLIP:
    if (record->event.pressed) {
      send_unicode_hex_string("0028 256F 00B0 25A1 00B0 FF09 256F FE35 0020 253B 2501 253B"); // (╯°□°）╯︵ ┻━┻
    } else {

    }
    break;
  case TABLE_BACK:
    if (record->event.pressed) {
      send_unicode_hex_string("252C 2500 252C 30CE 0028 0020 00BA 0020 005F 0020 00BA 30CE 0029"); // ┬─┬ノ( º _ ºノ)
    } else {

    }
    break;
  case LENNY:
    if (record->event.pressed) {
      send_unicode_hex_string("0028 0020 0361 00B0 0020 035C 0296 0020 0361 00B0 0029"); // ( ͡° ͜ʖ ͡°)
    } else {

    }
    break;
  case THAI_SUPA:
    if (record->event.pressed) {
      send_unicode_hex_string("0E28 0E38 0E20 0E27 0E13 0E34 0E0A"); // ศุภวณิช
    } else {

    }
    break;
  case THAI_MAX:
    if (record->event.pressed) {
      send_unicode_hex_string("0E41 0E21 0E47 0E01 0E0B 0E4C"); // แม็กซ์
    } else {

    }
    break;
  case THAI_ZACK:
    if (record->event.pressed) {
      send_unicode_hex_string("0E41 0E0B 0E47 0E04"); // แซ็ค
    } else {

    }
    break;
  case THAI_FERN:
    if (record->event.pressed) {
      send_unicode_hex_string("0E40 0E1F 0E34 0E23 0E4C 0E19"); // เฟิร์น
    } else {

    }
    break;
  case THAI_SAM:
    if (record->event.pressed) {
      send_unicode_hex_string("0E41 0E0B 0E21"); // แซม
    } else {

    }
    break;
  case THAI_NGOO:
    if (record->event.pressed) {
      send_unicode_hex_string("0E07 0E39 0E46 0E1B 0E25 0E32 0E46"); // งูๆปลาๆ
    } else {

    }
    break;
  }
  return true;
}


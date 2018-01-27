#include "orange62.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASELAYER 0
#define _FUNCTION 1
#define _SOUND 2
#define _RESET 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BASELAYER: Default Layer
   * ,--------------------------------------------------------------------------.
   * |   ~|   1|   2|   3|   4|   5|   6|   7|   8|   9|   0|   -|   =|       BS|
   * |--------------------------------------------------------------------------|
   * |   Tab|   Q|   W|   E|   R|   T|   Y|   U|   I|   O|   P|   [|   ]|      \|
   * |--------------------------------------------------------------------------|
   * |     Esc|   A|   S|   D|   F|   G|   H|   J|   K|   L|   ;|   '|       Ent|
   * |--------------------------------------------------------------------------.
   * |Shift     |   Z|   X|   C|   V|   B|   N|   M|   ,|   .|   /|        Shift|
   * |--------------------------------------------------------------------------|
   * |||| Ctrl|  Gui|  Alt|      Space|    Space|    Gui|   Alt||| _FL|||LEFT||||
   * `--------------------------------------------------------------------------.
   */
[_BASELAYER] = KEYMAP(
  KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, \
  KC_TAB,   KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS, \
  KC_ESC,    KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT, \
  KC_LSFT,    KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, \
  KC_LCTL, KC_LALT, KC_LGUI,  KC_SPC, LT(_FUNCTION, KC_SPC), KC_RGUI,  KC_RALT,  MO(_RESET), LT(_SOUND, KC_MUTE) ),

  /* Keymap _FUNCTION
   * ,--------------------------------------------------------------------------.
   * |    |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |--------------------------------------------------------------------------|
   * |      |    |    |   |     |    |    |    |    |    |    |    |    |       |
   * |--------------------------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |    |    |    |    |          |
   * |--------------------------------------------------------------------------.
   * |          |    |    |    |    |    |    |    |    |    |    |             |
   * |--------------------------------------------------------------------------|
   * ||||     |     |     |           |   FUNC  |       |      |||    |||    ||||
   * `--------------------------------------------------------------------------'
   */
[_FUNCTION] = KEYMAP(
  KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP, KC_TRNS, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_END, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),

  /* Keymap _SOUND
   * ,--------------------------------------------------------------------------.
   * |    |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |--------------------------------------------------------------------------|
   * |      |    |    |   |     |    |    |    |    |    |    |    |    |       |
   * |--------------------------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |    |    |    |    |          |
   * |--------------------------------------------------------------------------.
   * |          |    |    |    |    |    |    |    |    |    |    |             |
   * |--------------------------------------------------------------------------|
   * ||||     |     |     |           |   FUNC  |       |      |||    |||    ||||
   * `--------------------------------------------------------------------------'
   */
[_SOUND] = KEYMAP(
  KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_U, KC_VOLU, KC_TRNS, KC_P, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_J, KC_VOLD, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_M, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LCTL(KC_F2), KC_TRNS ),

  /* Keymap _RESET
   * ,--------------------------------------------------------------------------.
   * |    |    |    |    |    |    |    |    |    |    |    |    |    |         |
   * |--------------------------------------------------------------------------|
   * |      |    |    |   |RESET|    |    |    |    |    |    |    |    |       |
   * |--------------------------------------------------------------------------|
   * |        |    |    |    |    |    |    |    |    |    |    |    |          |
   * |--------------------------------------------------------------------------.
   * |          |    |    |    |    |    |    |    |    |    |    |             |
   * |--------------------------------------------------------------------------|
   * ||||     |     |     |           |         |       |      |||BASE|||    ||||
   * `--------------------------------------------------------------------------'
   */
[_RESET] = KEYMAP(
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(_BASELAYER), KC_TRNS),
};
const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}

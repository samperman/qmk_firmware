#include "orange62.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASELAYER 0
#define _RESET 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
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
/* k00,    k01,     k02,    k03,    k04,    k05,    k06,    k07,    k08,    k09,     k0A,      k0B,      k0C,      k0D, \ */
  KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC, \
/* k10,     k11,     k12,    k13,    k14,    k15,    k16,    k17,    k18,    k19,     k1A,      k1B,      k1C,     k1D, \ */
  KC_TAB,   KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS, \
/* k20,      k21,     k22,    k23,    k24,    k25,    k26,    k27,    k28,    k29,     k2A,      k2B,      k2C, \ */
  KC_ESC,    KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN,  KC_QUOT,  KC_ENT, \
/* k30,       k31,     k32,    k33,    k34,    k35,    k36,    k37,    k38,     k39,      k3A,      k3B, \ */
  KC_LSFT,    KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, \
/* k40,    k41,     k42,        k43,    k44,  k45,      k46,      k47,     k48 \ */
  KC_LCTL, KC_LALT, KC_LGUI,    KC_SPC, KC_SPC, KC_RGUI,  KC_RALT,  MO(_RESET), KC_M),

  /* Keymap _RESET: Volume Layer
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

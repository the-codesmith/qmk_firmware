#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

// James Layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PSCR,  KC_PAUSE, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC, XXXXXXX, \
    KC_LCTL, KC_LGUI, KC_LALT, MO(_FN1),KC_SPC,           KC_BSPC, XXXXXXX, MO(_FN1), KC_LEFT,KC_DOWN, KC_UP, KC_RGHT
  ),

  [_FN1] = LAYOUT(
    KC_GRAVE,KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,  KC_PAUSE, \
    RGB_TOG, RGB_MOD, RGB_VAD, RGB_VAI, _______, _______, _______, KC_PGUP, KC_UP,   KC_PGDN, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______,          KC_DELETE,XXXXXXX,_______, _______, _______, _______, _______
  )
};

/*
void led_set_user(uint8_t usb_led) {
#ifdef  RGBLIGHT_ENABLE
  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    rgblight_mode(19);
  }
  else {
    rgblight_mode(1);
  }
#endif //  RGBLIGHT_ENABLE

}
*/

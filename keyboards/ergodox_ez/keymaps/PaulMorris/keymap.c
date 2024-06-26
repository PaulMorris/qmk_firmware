#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  ALT_REP_LEFT = SAFE_RANGE,
  ALT_REP_RIGHT,

  // RGB_SLD = EZ_SAFE_RANGE,
  // RGB_SLD = SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    TO(3),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(2),                                          TO(7),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_X,           KC_F,           KC_D,           KC_P,           ALT_REP_LEFT,   TO(5),                                          TO(6),          ALT_REP_RIGHT,  KC_W,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_APPLICATION, KC_N,           KC_S,           KC_T,           KC_L,           KC_G,                                                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,
    OSM(MOD_LSFT),  KC_B,           KC_V,           KC_K,           KC_M,           KC_Q,           OSM(MOD_HYPR),                                  TO(4),          KC_Z,           KC_C,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       OSM(MOD_RSFT),
    TO(1),          OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_TRANSPARENT,
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_BSPC,        OSL(8),         KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    TG(3),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(2),                                          TG(7),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_X,           KC_F,           KC_D,           KC_P,           KC_J,           TG(5),                                          TG(6),          KC_P,           KC_W,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_H,           KC_M,                                                                           KC_Y,           KC_C,           KC_A,           KC_E,           KC_I,           KC_ENTER,
    OSM(MOD_LSFT),  KC_B,           KC_V,           KC_K,           KC_L,           KC_Q,           OSM(MOD_HYPR),                                  TG(4),          KC_Z,           KC_G,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  TO(0),
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_BSPC,        OSL(8),         KC_SPACE
  ),
  [2] = LAYOUT_ergodox_pretty(
    TG(3),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 TG(7),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_X,           KC_F,           KC_D,           KC_P,           KC_Y,           KC_TRANSPARENT,                                 TG(6),          KC_J,           KC_M,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_C,           KC_W,                                                                           KC_QUOTE,       KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,
    OSM(MOD_LSFT),  KC_B,           KC_V,           KC_K,           KC_G,           KC_Q,           OSM(MOD_HYPR),                                  TG(4),          KC_Z,           KC_L,           KC_SLASH,       KC_Y,           KC_COMMA,       OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  TO(0),
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_BSPC,        OSL(8),         KC_SPACE
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_F,           KC_D,           KC_W,           KC_H,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_Y,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_N,           KC_S,           KC_T,           KC_L,           KC_G,                                                                           KC_P,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_V,           KC_K,           KC_M,           KC_Q,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_C,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [4] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_L,           KC_M,           KC_W,           KC_J,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_K,           KC_F,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_R,           KC_T,           KC_D,           KC_G,                                                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_Q,           KC_V,           KC_C,           KC_Z,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_L,           KC_P,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_S,           OSM(MOD_LSFT),  KC_TRANSPARENT, KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_APPLICATION, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_ENTER,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           OSM(MOD_HYPR),                                  KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  TO(0),
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_SPACE,       OSL(8),         OSL(9),         KC_BSPC,        OSM(MOD_LSFT),  KC_ENTER
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_F,           KC_D,           KC_W,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_M,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_C,           KC_Y,                                                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_P,           KC_B,           KC_K,           KC_G,           KC_Q,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_L,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_C,           KC_D,           KC_W,           KC_J,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_C,           KC_F,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_L,           KC_G,                                                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_V,           KC_K,           KC_M,           KC_Q,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_P,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_0),     LCTL(KC_MINUS), KC_UP,          LCTL(LSFT(KC_EQUAL)),LALT(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSLS,        KC_PIPE,        KC_AMPR,        KC_PLUS,        KC_NO,          KC_TRANSPARENT,
    KC_HOME,        KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                                                          KC_CIRC,        KC_EQUAL,       KC_EXLM,        KC_MINUS,       KC_COLN,        KC_TRANSPARENT,
    KC_END,         KC_NO,          KC_PAGE_UP,     KC_NO,          KC_PGDN,        LALT(LSFT(KC_TAB)),KC_TRANSPARENT,                                 TO(7),          KC_TRANSPARENT, KC_UNDS,        KC_LABK,        KC_RABK,        KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, OSL(10),        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_RBRC,        KC_RCBR,        KC_RPRN,        KC_HASH,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SCLN,        KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_DLR,                                                                         KC_NO,          KC_1,           KC_2,           KC_3,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AT,          KC_PERC,        KC_TILD,        KC_GRAVE,       KC_NO,          KC_TRANSPARENT,                                 TO(7),          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,                                                                  KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F11,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(7),          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(5),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case ALT_REP_LEFT:
        case ALT_REP_RIGHT:
            return false;  // Ignore ALTREP keys.
    }

    return true;  // Other keys can be repeated.
}

static void process_alt_rep_left(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING("h"); return;
        case KC_W: SEND_STRING("h"); return;
        case KC_H: SEND_STRING("y"); return;
        case KC_U: SEND_STRING("'"); return;
    }
    SEND_STRING("j");
}

static void process_alt_rep_right(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_L: SEND_STRING("p"); return;
        case KC_M: SEND_STRING("p"); return;
        case KC_P: SEND_STRING("l"); return;
        case KC_G: SEND_STRING("l"); return;
        case KC_U: SEND_STRING("e"); return;
        case KC_O: SEND_STRING("a"); return;
        case KC_N: SEND_STRING("'"); return;
    }
    SEND_STRING("-");
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ALT_REP_LEFT: 
      if (record->event.pressed) {
        process_alt_rep_left(get_last_keycode(), get_last_mods());
      }
      return false;

    case ALT_REP_RIGHT:
      if (record->event.pressed) {
        process_alt_rep_right(get_last_keycode(), get_last_mods());
      }
      return false;
  }
  return true;
}

uint16_t layer_state_set_user(uint16_t state) {
    uint8_t layer = biton16(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};

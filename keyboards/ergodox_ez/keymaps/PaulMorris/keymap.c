#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  // 'AR' stands for 'Alternate Repeat' key
  AR_J = SAFE_RANGE,
  AR_RIGHT,
  AR_F,
  AR_V,
  AR_B,
  AR_H,
  AR_P,
  AR_Y,
  AR_E,

  // RGB_SLD = EZ_SAFE_RANGE,
  // RGB_SLD = SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    TO(5),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(4),                                          OSL(9),         KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_X,           AR_F,           KC_D,           AR_P,           AR_J,           TO(6),                                          TO(7),          AR_RIGHT,       KC_G,           KC_O,           KC_U,           KC_COMMA,       KC_TRANSPARENT,
    KC_APPLICATION, KC_N,           KC_S,           KC_T,           KC_L,           KC_W,                                                                           AR_Y,           AR_H,           KC_A,           AR_E,           KC_I,           KC_ENTER,
    OSM(MOD_LSFT),  AR_B,           AR_V,           KC_K,           KC_M,           KC_Q,           OSM(MOD_HYPR),                                  LSFT(KC_F3),    KC_Z,           KC_C,           KC_QUOTE,       KC_SLASH,       KC_DOT,         OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_TRANSPARENT,
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(2),         KC_BSPC,        OSL(1),         KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_0),     KC_8,           LCTL(LSFT(KC_EQUAL)),LCTL(KC_MINUS), KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_TAB),   LALT(LSFT(KC_TAB)),KC_9,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_6,           KC_4,           KC_2,           KC_0,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_1,           KC_3,           KC_5,           KC_7,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_HOME,        KC_END,         KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_UP,          KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSFT(KC_R),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PIPE,        KC_RPRN,        KC_RCBR,        KC_TILD,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_RBRC,        KC_RABK,        KC_AMPR,        KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_LPRN,        KC_LCBR,        KC_MINUS,       KC_COLN,        KC_HASH,                                                                        KC_AT,          KC_EQUAL,       KC_UNDS,        KC_LBRC,        KC_LABK,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DLR,         KC_PERC,        KC_SCLN,        KC_ASTR,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_GRAVE,       KC_BSLS,        KC_PLUS,        KC_EXLM,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSFT(KC_R),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(3),         KC_TRANSPARENT
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F8,          KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F6,          KC_F4,          KC_F2,          KC_F10,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F1,          KC_F3,          KC_F5,          KC_F7,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,         KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [4] = LAYOUT_ergodox_pretty(
    TG(5),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_X,           KC_F,           KC_D,           KC_P,           KC_Y,           KC_TRANSPARENT,                                 TG(7),          KC_J,           KC_M,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_C,           KC_W,                                                                           KC_QUOTE,       KC_H,           KC_A,           KC_E,           KC_I,           KC_ENTER,
    OSM(MOD_LSFT),  KC_B,           KC_V,           KC_K,           KC_G,           KC_Q,           OSM(MOD_HYPR),                                  KC_TRANSPARENT, KC_Z,           KC_L,           KC_SLASH,       KC_Y,           KC_COMMA,       OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  TO(0),
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_BSPC,        OSL(8),         KC_SPACE
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_F,           KC_D,           KC_W,           KC_H,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_Y,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_N,           KC_S,           KC_T,           KC_L,           KC_G,                                                                           KC_P,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_B,           KC_V,           KC_K,           KC_M,           KC_Q,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_C,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [6] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT,
    CW_TOGG,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT,
    KC_APPLICATION, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_ENTER,
    OSM(MOD_LSFT),  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           OSM(MOD_HYPR),                                  KC_TRANSPARENT, KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       OSM(MOD_RSFT),
    KC_TRANSPARENT, OSM(MOD_LCTL),  OSM(MOD_LALT),  KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        OSM(MOD_LALT),  OSM(MOD_LGUI),  TO(0),
                                                                                                    OSM(MOD_LCTL),  KC_LEFT_GUI,    OSM(MOD_LALT),  MT(MOD_LCTL, KC_ESCAPE),
                                                                                                                    KC_TAB,         KC_DELETE,
                                                                                    KC_SPACE,       OSL(8),         OSL(9),         KC_BSPC,        OSM(MOD_LSFT),  KC_ENTER
  ),
  [7] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_X,           KC_F,           KC_D,           KC_W,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_M,           KC_O,           KC_U,           KC_DOT,         KC_TRANSPARENT,
    KC_SCLN,        KC_N,           KC_S,           KC_T,           KC_C,           KC_Y,                                                                           KC_Y,           KC_H,           KC_A,           KC_E,           KC_I,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_P,           KC_B,           KC_K,           KC_G,           KC_Q,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Z,           KC_L,           KC_QUOTE,       KC_SLASH,       KC_COMMA,       KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_R,           OSM(MOD_LSFT),  OSL(9),         KC_TRANSPARENT, OSL(8),         KC_SPACE
  ),
  [8] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_0),     LCTL(KC_MINUS), KC_UP,          LCTL(LSFT(KC_EQUAL)),LALT(KC_TAB),   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_BSLS,        KC_PIPE,        KC_AMPR,        KC_PLUS,        KC_NO,          KC_TRANSPARENT,
    KC_HOME,        KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,                                                                          KC_CIRC,        KC_EQUAL,       KC_EXLM,        KC_MINUS,       KC_COLN,        KC_TRANSPARENT,
    KC_END,         KC_NO,          KC_PAGE_UP,     KC_NO,          KC_PGDN,        LALT(LSFT(KC_TAB)),KC_TRANSPARENT,                                 TO(2),          KC_TRANSPARENT, KC_UNDS,        KC_LABK,        KC_RABK,        KC_ASTR,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(6),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LSFT(KC_R),     KC_TRANSPARENT, OSL(10),        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_RBRC,        KC_RCBR,        KC_RPRN,        KC_HASH,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_SCLN,        KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_DLR,                                                                         KC_NO,          KC_1,           KC_2,           KC_3,           KC_0,           KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AT,          KC_PERC,        KC_TILD,        KC_GRAVE,       KC_NO,          KC_TRANSPARENT,                                 TO(2),          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(6),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_NO,          KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          KC_F4,          KC_F5,          KC_F6,          KC_F12,         KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_PAGE_UP),LCTL(KC_PGDN),  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,                                                                  KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F11,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT,                                 TO(2),          KC_NO,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(6),
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case AR_J:
        case AR_RIGHT:
        case AR_E:
        case AR_F:
        case AR_V:
        case AR_B:
        case AR_H:
        case AR_P:
        case AR_Y:
            return false;  // Ignore ALTREP keys.
    }

    return true;  // Other keys can be repeated.
}

static void process_ar_e(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_U: SEND_STRING("h"); set_last_keycode(KC_H); return;
    }
    SEND_STRING("e");
    set_last_keycode(KC_E);
}

static void process_ar_f(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING("h"); set_last_keycode(KC_H); return;
        case KC_P: SEND_STRING("l"); set_last_keycode(KC_L); return;
    }
    SEND_STRING("f");
    set_last_keycode(KC_F);
}

static void process_ar_v(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING("y"); set_last_keycode(KC_Y); return;
        case KC_M: SEND_STRING("p"); set_last_keycode(KC_P); return;
    }
    SEND_STRING("v");
    set_last_keycode(KC_V);
}

static void process_ar_b(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_G: SEND_STRING("h"); set_last_keycode(KC_H); return;
    }
    SEND_STRING("b");
    set_last_keycode(KC_B);
}

static void process_ar_h(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING("f"); set_last_keycode(KC_F); return;
        case KC_G: SEND_STRING("b"); set_last_keycode(KC_B); return;
        case KC_L: SEND_STRING("p"); set_last_keycode(KC_P); return;
        case KC_U: SEND_STRING("e"); set_last_keycode(KC_E); return;
    }
    SEND_STRING("h");
    set_last_keycode(KC_H);
}

static void process_ar_j(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_U: SEND_STRING("'"); set_last_keycode(KC_QUOTE); return;
    }
    SEND_STRING("j");
    set_last_keycode(KC_J);
}

static void process_ar_p(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_H: SEND_STRING("y"); set_last_keycode(KC_Y); return;
        case KC_M: SEND_STRING("v"); set_last_keycode(KC_V); return;
        case KC_L: SEND_STRING("h"); set_last_keycode(KC_H); return;
    }
    SEND_STRING("p");
    set_last_keycode(KC_P);
}

static void process_ar_y(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_C: SEND_STRING("v"); set_last_keycode(KC_V); return;
    }
    SEND_STRING("y");
    set_last_keycode(KC_Y);
}

static void process_ar_right(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_L: SEND_STRING("w"); set_last_keycode(KC_W); return;
        case KC_N: SEND_STRING("'"); set_last_keycode(KC_QUOTE); return;
        case KC_O: SEND_STRING("a"); set_last_keycode(KC_A); return;
        case KC_U: SEND_STRING("j"); set_last_keycode(KC_J); return;

        // pl/pf: you can't do pl->pf because of mpl and lpl
        case KC_P: SEND_STRING("f"); set_last_keycode(KC_F); return;

        // hy/hp: you can't do hy->hp because of chy and ghy
        case KC_H: SEND_STRING("p"); set_last_keycode(KC_P); return;
    }
    SEND_STRING("q");
    set_last_keycode(KC_Q);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case AR_F:
      if (record->event.pressed) {
        process_ar_f(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_V:
      if (record->event.pressed) {
        process_ar_v(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_B:
      if (record->event.pressed) {
        process_ar_b(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_E:
      if (record->event.pressed) {
        process_ar_e(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_H:
      if (record->event.pressed) {
        process_ar_h(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_J:
      if (record->event.pressed) {
        process_ar_j(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_RIGHT:
      if (record->event.pressed) {
        process_ar_right(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_P:
      if (record->event.pressed) {
        process_ar_p(get_last_keycode(), get_last_mods());
      }
      return false;

    case AR_Y:
      if (record->event.pressed) {
        process_ar_y(get_last_keycode(), get_last_mods());
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

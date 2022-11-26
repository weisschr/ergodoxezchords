#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
};

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
};

const uint16_t PROGMEM left_shift_combo[] = {KC_F, KC_D,  COMBO_END};
const uint16_t PROGMEM right_shift_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM left_alt_combo[] = {KC_R, KC_E, COMBO_END};
const uint16_t PROGMEM right_alt_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM left_ctrl_combo[] = {KC_V, KC_C, COMBO_END};
const uint16_t PROGMEM right_ctrl_combo[] = {KC_M, KC_COMMA, COMBO_END};
const uint16_t PROGMEM left_shift_ctrl_combo[] = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM right_shift_ctrl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM left_shift_alt_combo[] = {KC_R, KC_E, KC_W, COMBO_END};
const uint16_t PROGMEM right_shift_alt_combo[] = {KC_U, KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM left_ctrl_alt_combo[] = {KC_V, KC_C, KC_X, COMBO_END};
const uint16_t PROGMEM right_ctrl_alt_combo[] = {KC_M, KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM left_shift_ctrl_alt_combo[] = {KC_F, KC_D, KC_S, KC_A, COMBO_END};
const uint16_t PROGMEM right_shift_ctrl_alt_combo[] = {KC_J, KC_K, KC_L, KC_SCOLON, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(left_shift_combo, KC_LSHIFT),
    COMBO(right_shift_combo, KC_RSHIFT),
    COMBO(left_alt_combo, KC_LALT),
    COMBO(right_alt_combo, KC_RALT),
    COMBO(left_ctrl_combo, KC_LCTRL),
    COMBO(right_ctrl_combo, KC_RCTRL),
    COMBO(left_shift_ctrl_combo, LCTL(KC_LSHIFT)),
    COMBO(right_shift_ctrl_combo, RCTL(KC_RSHIFT)),
    COMBO(left_shift_alt_combo, LALT(KC_LSHIFT)),
    COMBO(right_shift_alt_combo, RALT(KC_RSHIFT)),
    COMBO(left_ctrl_alt_combo, LCTL(KC_LALT)),
    COMBO(right_ctrl_alt_combo, RCTL(KC_RALT)),
    COMBO(left_shift_ctrl_alt_combo, LALT(LCTL(KC_LSHIFT))),
    COMBO(right_shift_ctrl_alt_combo, RALT(RCTL(KC_RSHIFT)))
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_EQUAL,     KC_1,       KC_2,      KC_3,    KC_4,     KC_5, MT(MOD_LGUI, KC_ESCAPE),  KC_RGUI,     KC_6, KC_7, KC_8,     KC_9,   KC_0,      KC_MINUS,
    ST_MACRO_0,   KC_Q,       KC_W,      KC_E,    KC_R,     KC_T, TD(DANCE_0),              TD(DANCE_2), KC_Y, KC_U, KC_I,     KC_O,   KC_P,      KC_BSLASH,
    TD(DANCE_1),  KC_A,       KC_S,      KC_D,    KC_F,     KC_G,                                        KC_H, KC_J, KC_K,     KC_L,   KC_SCOLON, KC_QUOTE,
    KC_LSHIFT,    KC_Z,       KC_X,      KC_C,    KC_V,     KC_B, KC_INSERT,                KC_DELETE,   KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH,  KC_RSHIFT,
    KC_GRAVE,     KC_PC_UNDO, KC_PC_CUT, KC_LEFT, KC_RIGHT,                                                    KC_UP, KC_DOWN, TD(DANCE_3), TD(DANCE_4), TD(DANCE_5),
                                                KC_PC_COPY,     KC_PC_PASTE,    OSL(1),         OSL(2),
                                                KC_HOME,        KC_PGUP,
                                                KC_SPACE,       KC_TAB,         KC_END,  KC_PGDOWN,   KC_BSPACE,  KC_ENTER
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, LSFT(KC_F1),    LSFT(KC_F2),    LSFT(KC_F3),    LSFT(KC_F4),    LSFT(KC_F5),    KC_TRANSPARENT,                                 KC_TRANSPARENT, RSFT(KC_F6),    RSFT(KC_F7),    RSFT(KC_F8),    RSFT(KC_F9),    RSFT(KC_F10),   KC_TRANSPARENT,
    KC_TRANSPARENT, LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F3),    LCTL(KC_F4),    LCTL(KC_F5),    KC_TRANSPARENT,                                 TD(DANCE_6),    RCTL(KC_F6),    RCTL(KC_F7),    RCTL(KC_F8),    LCTL(KC_F9),    RCTL(KC_F10),   KC_F11,
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F12,
    KC_TRANSPARENT, LALT(KC_F1),    LALT(KC_F2),    LALT(KC_F3),    LALT(KC_F4),    RALT(KC_F5),    KC_CALCULATOR,                                  KC_CALCULATOR,  RALT(KC_F6),    RALT(KC_F7),    RALT(KC_F8),    RALT(KC_F9),    RALT(KC_F10),   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_WWW_FORWARD, LALT(KC_MS_BTN1),LALT(KC_MS_BTN3),RALT(KC_MS_BTN2),KC_WWW_HOME,    KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_7),    KC_HOME,        KC_TRANSPARENT, KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_WWW_BACK,    LSFT(KC_MS_BTN1),LSFT(KC_MS_BTN3),RSFT(KC_MS_BTN2),KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 TD(DANCE_8),    TD(DANCE_9),    KC_PGUP,        KC_MS_UP,       KC_PGDOWN,      KC_MS_ACCEL0,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_BRIGHTNESS_UP,KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_AUDIO_VOL_UP,                                                                TD(DANCE_10),   KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_ACCEL1,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,LCTL(KC_MS_BTN1),LCTL(KC_MS_BTN3),RCTL(KC_MS_BTN2),KC_AUDIO_VOL_DOWN,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_MS_ACCEL2,   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_RCTL(SS_TAP(X_DELETE))));

    }
    break;
  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
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

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[11];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F4));
        tap_code16(LCTL(KC_F4));
        tap_code16(LCTL(KC_F4));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F4));
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F4)); break;
        case DOUBLE_TAP: register_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F4)); register_code16(LCTL(KC_F4));
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F4)); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_F4)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F4)); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_CAPSLOCK);
        tap_code16(KC_CAPSLOCK);
        tap_code16(KC_CAPSLOCK);
    }
    if(state->count > 3) {
        tap_code16(KC_CAPSLOCK);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_CAPSLOCK); break;
        case DOUBLE_TAP: register_code16(RGUI(KC_D)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_CAPSLOCK); register_code16(KC_CAPSLOCK);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_CAPSLOCK); break;
        case DOUBLE_TAP: unregister_code16(RGUI(KC_D)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_CAPSLOCK); break;
    }
    dance_state[1].step = 0;
}
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: layer_move(2); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: layer_move(2); break;
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRACKET);
        tap_code16(KC_LBRACKET);
        tap_code16(KC_LBRACKET);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRACKET);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRACKET); register_code16(KC_LBRACKET);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRACKET); break;
        case DOUBLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRACKET); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RBRACKET);
        tap_code16(KC_RBRACKET);
        tap_code16(KC_RBRACKET);
    }
    if(state->count > 3) {
        tap_code16(KC_RBRACKET);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_RBRACKET); break;
        case DOUBLE_TAP: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RBRACKET); register_code16(KC_RBRACKET);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_RBRACKET); break;
        case DOUBLE_TAP: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RBRACKET); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_HOLD: register_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_HOLD: unregister_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
    }
    dance_state[5].step = 0;
}
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: layer_move(0); break;
        case DOUBLE_TAP: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
    }
    dance_state[6].step = 0;
}
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_HOLD: register_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_HOLD: register_code16(KC_MEDIA_FAST_FORWARD); break;
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_HOLD: unregister_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_HOLD: unregister_code16(KC_MEDIA_FAST_FORWARD); break;
    }
    dance_state[7].step = 0;
}
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: layer_move(0); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: layer_move(0); break;
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_NEXT_TRACK);
        tap_code16(KC_MEDIA_NEXT_TRACK);
        tap_code16(KC_MEDIA_NEXT_TRACK);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_NEXT_TRACK);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_NEXT_TRACK); register_code16(KC_MEDIA_NEXT_TRACK);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_STOP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[10].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
};


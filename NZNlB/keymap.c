#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_245_245,
  HSV_74_255_206,
  HSV_152_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

#define DUAL_FUNC_0 LT(1, KC_T)
#define DUAL_FUNC_1 LT(6, KC_B)
#define DUAL_FUNC_2 LT(10, KC_I)
#define DUAL_FUNC_3 LT(11, KC_F3)
#define DUAL_FUNC_4 LT(1, KC_F20)
#define DUAL_FUNC_5 LT(1, KC_X)
#define DUAL_FUNC_6 LT(9, KC_F17)
#define DUAL_FUNC_7 LT(12, KC_U)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESCAPE,                                      CW_TOGG,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_HOME,                                        KC_END,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_PAGE_UP,                                                                     KC_PGDN,        KC_H,           KC_J,           KC_K,           KC_L,           LT(2, KC_SCLN), LT(3, KC_QUOTE),
    KC_LEFT_SHIFT,  MT(MOD_LCTL, KC_Z),LT(2, KC_X),    KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         MT(MOD_RCTL, KC_SLASH),KC_RIGHT_SHIFT, 
    LT(1, KC_GRAVE),KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,    TD(DANCE_0),    LGUI(KC_D),                                                                                                     KC_ESCAPE,      LT(1, KC_SPACE),KC_DOWN,        KC_UP,          KC_LBRC,        KC_RBRC,        
    MT(MOD_LGUI, KC_SPACE),KC_TAB,         OSM(MOD_MEH),                   KC_RIGHT_ALT,   KC_BSPC,        LT(1, KC_ENTER)
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          TO(0),                                          QK_LLCK,        KC_F6,          KC_F7,          KC_ESCAPE,      KC_F9,          KC_F10,         KC_F11,         
    KC_DELETE,      KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_VAI,        KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_VAD,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_MINUS,       KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COMMA,       HSV_0_245_245,  HSV_74_255_206, HSV_152_255_255,KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_DOT,         MT(MOD_RCTL, KC_BSLS),KC_TRANSPARENT, 
    KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_ACCEL2,   KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_PGDN),  LCTL(KC_PAGE_UP),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN2,     KC_TRANSPARENT, KC_MS_ACCEL1,                   KC_MS_ACCEL2,   KC_MS_ACCEL0,   KC_MS_BTN1
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, TG(4),          TO(2),          TO(1),          TO(0),          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_INTERNATIONAL_1,KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F13,         KC_F14,         KC_F15,         KC_F16,         KC_F16,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_F21,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F22,         KC_F23,         KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_END,                                                                                                         KC_HOME,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RCTL(KC_PGDN),  LSFT(RCTL(KC_LEFT)),KC_TRANSPARENT,                 KC_TRANSPARENT, RCTL(RSFT(KC_RIGHT)),RCTL(KC_PAGE_UP)
  ),
  [4] = LAYOUT_moonlander(
    KC_UP,          DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(2),          TO(1),          TO(0),          KC_TRANSPARENT, 
    KC_DOWN,        LCTL(KC_E),     LALT(LCTL(KC_M)),MT(MOD_LSFT, KC_ESCAPE),TD(DANCE_1),    KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_DELETE,      LSFT(KC_A),     KC_S,           LALT(LCTL(KC_K)),KC_F,           DUAL_FUNC_5,    TO(0),                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  TD(DANCE_2),    LCTL(KC_X),     DUAL_FUNC_6,    DUAL_FUNC_7,    KC_K,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_KP_MINUS,    KC_KP_PLUS,     KC_RIGHT_ALT,   KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_LEFT_GUI,    KC_ENTER,                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, RGB_TOG,        RGB_SPD,        RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_VAD,        RGB_VAI,        RGB_SLD,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_MODE_FORWARD,RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 TO(0),          RGB_SAD,        RGB_SAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_RIGHT_SHIFT, KC_LEFT_SHIFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, CW_TOGG),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {25,244,245}, {44,255,255}, {96,218,204}, {211,245,248}, {96,218,204}, {74,225,166}, {211,244,245}, {211,244,245}, {211,245,248}, {211,244,245}, {74,225,166}, {211,244,245}, {211,244,245}, {211,244,245}, {96,218,204}, {74,225,166}, {211,244,245}, {211,244,245}, {211,244,245}, {96,218,204}, {74,225,166}, {211,244,245}, {211,244,245}, {211,244,245}, {96,218,204}, {74,225,166}, {211,244,245}, {211,244,245}, {209,244,245}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {74,225,166}, {74,225,166}, {96,218,204}, {96,218,204}, {96,218,204}, {74,225,166}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {74,225,166}, {152,255,255}, {152,255,255}, {152,255,255}, {41,255,255}, {74,225,166}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {74,225,166}, {152,255,255}, {152,255,255}, {152,255,255}, {211,244,245}, {74,225,166}, {96,219,206}, {96,219,206}, {211,244,245}, {138,219,202}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {96,218,204}, {96,219,206} },

    [2] = { {7,251,249}, {7,251,249}, {0,218,204}, {7,251,249}, {7,251,249}, {7,251,249}, {207,255,255}, {7,251,249}, {207,255,255}, {22,247,255}, {7,251,249}, {7,251,249}, {138,218,204}, {7,251,249}, {22,247,255}, {7,251,249}, {138,218,204}, {138,218,204}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {138,218,204}, {138,219,202}, {7,251,249}, {7,251,249}, {138,218,204}, {138,219,202}, {138,219,202}, {7,251,249}, {7,251,249}, {7,251,249}, {138,218,204}, {7,251,249}, {0,177,208}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {0,218,204}, {25,244,245}, {74,242,63}, {7,251,249}, {7,251,249}, {0,218,204}, {25,228,248}, {74,246,181}, {7,251,249}, {7,251,249}, {0,218,204}, {25,244,245}, {74,255,206}, {7,251,249}, {7,251,249}, {0,218,204}, {7,251,249}, {7,251,249}, {7,251,249}, {7,251,249}, {138,218,204}, {0,118,206}, {7,251,249}, {7,251,249} },

    [3] = { {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {247,234,214}, {247,234,214}, {234,233,214}, {247,234,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {234,233,214}, {34,243,245}, {34,243,245}, {234,233,214}, {234,233,214}, {234,233,214}, {34,243,245}, {34,243,245}, {234,233,214}, {234,233,214}, {234,233,214}, {34,243,245}, {34,243,245}, {34,243,245}, {234,233,214}, {234,233,214}, {34,243,245}, {34,243,245}, {34,243,245}, {234,233,214}, {234,233,214}, {34,243,245}, {34,243,245}, {34,243,245}, {234,233,214}, {234,233,214}, {234,233,214}, {155,229,248}, {155,229,248}, {234,233,214}, {155,229,248} },

    [4] = { {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201}, {42,230,201} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,143,156}, {0,0,0}, {0,0,0}, {0,0,0}, {102,249,230}, {134,221,230}, {13,203,214}, {192,218,204}, {0,0,0}, {102,249,230}, {130,220,183}, {28,203,214}, {192,173,128}, {0,0,0}, {148,47,70}, {212,224,232}, {34,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {153,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_KP_2);
        } else {
          unregister_code16(KC_KP_2);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LSFT(KC_G));
        } else {
          unregister_code16(LSFT(KC_G));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(LSFT(KC_G)));
        } else {
          unregister_code16(LCTL(LSFT(KC_G)));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_C);
        } else {
          unregister_code16(KC_C);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_V);
        } else {
          unregister_code16(KC_V);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_245_245:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,245,245);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
  }
  return true;
}


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

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: register_code16(KC_SPACE); register_code16(KC_SPACE); break;
        case DOUBLE_HOLD: layer_on(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_SPACE); break;
              case DOUBLE_HOLD: 
                if(!is_layer_locked(5)) {
                  layer_off(5);
                }
                break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(KC_L); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_L)); break;
        case DOUBLE_HOLD: register_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(KC_L); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_L)); break;
        case DOUBLE_HOLD: unregister_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};

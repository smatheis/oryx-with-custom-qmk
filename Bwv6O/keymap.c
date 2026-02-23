#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  DRAG_SCROLL,
  TOGGLE_SCROLL,
  NAVIGATOR_INC_CPI,
  NAVIGATOR_DEC_CPI,
  NAVIGATOR_TURBO,
  NAVIGATOR_AIM
};



#define DUAL_FUNC_0 LT(14, KC_F22)
#define DUAL_FUNC_1 LT(13, KC_H)
#define DUAL_FUNC_2 LT(4, KC_L)
#define DUAL_FUNC_3 LT(2, KC_F15)
#define DUAL_FUNC_4 LT(4, KC_C)
#define DUAL_FUNC_5 LT(7, KC_T)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    DUAL_FUNC_0,    DM_PLY1,        DM_PLY2,        LGUI(LSFT(KC_Z)),KC_MAC_UNDO,    LGUI(KC_SPACE),                                 LALT(LGUI(LCTL(LSFT(KC_A)))),LALT(LGUI(LCTL(LSFT(KC_B)))),LALT(LGUI(LCTL(LSFT(KC_C)))),LALT(LGUI(LCTL(LSFT(KC_D)))),LALT(LGUI(LCTL(LSFT(KC_E)))),LALT(LGUI(LCTL(LSFT(KC_F)))),
    DUAL_FUNC_1,    MT(MOD_LGUI, KC_TAB),MT(MOD_LSFT, KC_F),MT(MOD_LALT, KC_U),MT(MOD_LCTL, KC_M),KC_V,                                           KC_Q,           MT(MOD_RCTL, KC_L),MT(MOD_RALT, KC_B),MT(MOD_RSFT, KC_DOT),MT(MOD_RGUI, DE_Z),KC_ENTER,       
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LSFT, KC_C),MT(MOD_LALT, KC_I),MT(MOD_LCTL, KC_T),KC_D,                                           KC_R,           MT(MOD_RCTL, KC_N),MT(MOD_RALT, KC_H),MT(MOD_RSFT, KC_O),MT(MOD_RGUI, KC_S),KC_TRANSPARENT, 
    SH_MON,         MO(2),          KC_P,           DE_Y,           DUAL_FUNC_2,    KC_J,                                           KC_X,           KC_W,           KC_K,           KC_COMMA,       OSM(MOD_LSFT),  KC_TRANSPARENT, 
                                                    MO(1),          LT(4, KC_E),                                    LT(4, KC_SPACE),MO(2)
  ),
  [1] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_EQUAL,                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    RALT(KC_E),     LALT(KC_L),     LSFT(KC_SLASH), LALT(KC_5),     LALT(KC_6),     KC_CIRC,                                        DE_EXLM,        KC_NUBS,        LSFT(KC_NUBS),  DE_EQL,         DE_AMPR,        KC_TRANSPARENT, 
    KC_NONUS_HASH,  LALT(LSFT(KC_7)),LSFT(KC_7),     LALT(KC_8),     LALT(KC_9),     LSFT(KC_RBRC),                                  DE_QST,         DE_LPRN,        DE_RPRN,        DE_MINS,        DE_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, DE_DLR,         LALT(KC_7),     LALT(KC_N),     LSFT(KC_EQUAL),                                 DE_PLUS,        DE_PERC,        DE_DQOT,        LSFT(KC_NONUS_HASH),DE_SCLN,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, LT(4, KC_SPACE),                                KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_X,           KC_KP_PLUS,     KC_KP_MINUS,    KC_KP_ASTERISK, KC_KP_SLASH,    KC_NO,          
    KC_NO,          KC_PAGE_UP,     KC_BSPC,        KC_UP,          KC_DELETE,      KC_PGDN,                                        KC_BSPC,        KC_1,           KC_2,           KC_3,           KC_DOT,         KC_TRANSPARENT, 
    LGUI(KC_A),     LGUI(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(KC_RIGHT),                                 KC_TAB,         KC_4,           KC_5,           KC_6,           KC_0,           KC_COMMA,       
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_X),     LGUI(KC_C),     LGUI(KC_V),     KC_ENTER,                                       DE_COLN,        KC_7,           KC_8,           KC_9,           DE_SCLN,        KC_NO,          
                                                    KC_TRANSPARENT, LT(4, KC_SPACE),                                KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,                                        RGB_SPI,        RGB_SPD,        RGB_HUI,        RGB_HUD,        RGB_SAI,        RGB_SAD,        
    KC_TRANSPARENT, KC_BRIGHTNESS_UP,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_UP,                                KC_PSCR,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,                                  KC_SCRL,        KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,                                KC_NUM,         KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_MS_JIGGLER_TOGGLE,                                KC_MS_JIGGLER_TOGGLE,KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          LALT(LGUI(KC_UP)),LALT(LCTL(LSFT(KC_1))),KC_NO,                                          LALT(LCTL(LSFT(KC_A))),LALT(LCTL(LSFT(KC_B))),LALT(LCTL(LSFT(KC_C))),LALT(LCTL(LSFT(KC_D))),LALT(LCTL(LSFT(KC_E))),LALT(LCTL(LSFT(KC_F))),
    LCTL(KC_SCLN),  KC_NO,          KC_NO,          LALT(LGUI(KC_DOWN)),LALT(LCTL(LSFT(KC_0))),KC_NO,                                          LALT(LCTL(LSFT(KC_G))),LALT(LCTL(LSFT(KC_H))),LALT(LCTL(LSFT(KC_I))),LALT(LCTL(LSFT(KC_J))),LALT(LCTL(LSFT(KC_K))),LALT(LCTL(LSFT(KC_Q))),
    KC_TRANSPARENT, DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    LGUI(KC_S),     LGUI(LSFT(KC_I)),                                LALT(LCTL(LSFT(KC_L))),LALT(LCTL(LSFT(KC_M))),LALT(LCTL(LSFT(KC_N))),LALT(LCTL(LSFT(KC_O))),LALT(LCTL(LSFT(KC_P))),LALT(LCTL(LSFT(KC_R))),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_MS_WH_UP,    KC_MS_WH_DOWN,  QK_LLCK,                                        QK_LLCK,        KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_TRANSPARENT, NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,
    KC_TRANSPARENT, KC_LEFT_SHIFT,  KC_MS_BTN5,     KC_MS_UP,       KC_MS_BTN4,     TOGGLE_SCROLL,                                  TOGGLE_SCROLL,  KC_MS_BTN5,     KC_MS_UP,       KC_MS_BTN4,     KC_LEFT_SHIFT,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_CTRL,   KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    DRAG_SCROLL,                                    DRAG_SCROLL,    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_LEFT_CTRL,   KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, KC_TRANSPARENT, KC_LEFT_GUI,    KC_TRANSPARENT, 
                                                    KC_MS_BTN2,     KC_MS_BTN1,                                     KC_MS_BTN1,     KC_MS_BTN2
  ),
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  '*', '*', '*', '*'
);

const uint16_t PROGMEM combo0[] = { MT(MOD_LCTL, KC_M), MT(MOD_LCTL, KC_T), COMBO_END};
const uint16_t PROGMEM combo1[] = { MT(MOD_LALT, KC_U), MT(MOD_LALT, KC_I), COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_LSFT, KC_F), MT(MOD_LSFT, KC_C), COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_V, KC_D, COMBO_END};
const uint16_t PROGMEM combo4[] = { DM_PLY1, LGUI(KC_SPACE)};
const uint16_t PROGMEM combo5[] = { DM_PLY2, LGUI(KC_SPACE)};
const uint16_t PROGMEM combo6[] = { KC_ESCAPE, LGUI(KC_SPACE)};
const uint16_t PROGMEM combo7[] = { KC_F1, KC_F2, KC_F3, KC_F4};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, DE_AE),
    COMBO(combo1, DE_OE),
    COMBO(combo2, DE_UE),
    COMBO(combo3, DE_SS),
    COMBO(combo4, DM_REC1),
    COMBO(combo5, DM_REC2),
    COMBO(combo6, DM_RSTP),
    COMBO(combo7, QK_BOOTLOADER),
};




extern bool set_scrolling;
extern bool navigator_turbo;
extern bool navigator_aim;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_W));
        } else {
          unregister_code16(LGUI(KC_W));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(KC_Q));
        } else {
          unregister_code16(LGUI(KC_Q));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_P));
        } else {
          unregister_code16(LGUI(KC_P));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_P)));
        } else {
          unregister_code16(LGUI(LSFT(KC_P)));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_G);
        } else {
          unregister_code16(KC_G);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_SPACE));
        } else {
          unregister_code16(LCTL(KC_SPACE));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_F));
        } else {
          unregister_code16(LGUI(KC_F));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_F)));
        } else {
          unregister_code16(LGUI(LSFT(KC_F)));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_B));
        } else {
          unregister_code16(LGUI(KC_B));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LGUI(LSFT(KC_E)));
        } else {
          unregister_code16(LGUI(LSFT(KC_E)));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_SLASH));
        } else {
          unregister_code16(LGUI(KC_SLASH));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_A)));
        } else {
          unregister_code16(LALT(LSFT(KC_A)));
        }  
      }  
      return false;
    case DRAG_SCROLL:
      if (record->event.pressed) {
        set_scrolling = true;
      } else {
        set_scrolling = false;
      }
      return false;
    case TOGGLE_SCROLL:
      if (record->event.pressed) {
        set_scrolling = !set_scrolling;
      }
      return false;
    break;
  case NAVIGATOR_TURBO:
    if (record->event.pressed) {
      navigator_turbo = true;
    } else {
      navigator_turbo = false;
    }
    return false;
  case NAVIGATOR_AIM:
    if (record->event.pressed) {
      navigator_aim = true;
    } else {
      navigator_aim = false;
    }
    return false;
  case NAVIGATOR_INC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(1);
    }
    return false;
  case NAVIGATOR_DEC_CPI:
    if (record->event.pressed) {
        pointing_device_set_cpi(0);
    }
    return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

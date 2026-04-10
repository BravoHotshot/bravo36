#include QMK_KEYBOARD_H

enum layer_names {
    _QWERTY,
    _NAV,
    _NUM,
    _ADJUST
};

#define ESC_ALT  MT(MOD_LALT, KC_ESC)
#define A_SFT    MT(MOD_LSFT, KC_A)
#define Z_CTL    MT(MOD_LCTL, KC_Z)
#define SCLN_SFT MT(MOD_RSFT, KC_SCLN)
#define SLSH_CTL MT(MOD_RCTL, KC_SLSH)
#define SPC_NUM  LT(_NUM, KC_SPC)
#define ENT_NAV  LT(_NAV, KC_ENT)
#define NAV_ADJ  MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT_split_3x5_3(
  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
  A_SFT,   KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,    SCLN_SFT,
  Z_CTL,   KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT,  SLSH_CTL,
                 ESC_ALT, KC_LGUI, KC_BSPC,      KC_TAB,  SPC_NUM, ENT_NAV
),

[_NAV] = LAYOUT_split_3x5_3(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
  KC_F11,  KC_F12,  KC_UP,   XXXXXXX, XXXXXXX,      XXXXXXX, KC_PGUP, KC_HOME, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,      XXXXXXX, KC_PGDN, KC_END,  XXXXXXX, XXXXXXX,
                    _______, _______, KC_DEL,       _______, NAV_ADJ, _______
),

[_NUM] = LAYOUT_split_3x5_3(
  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    _______, KC_GRV,  KC_QUOT,      _______, _______, _______
),

[_ADJUST] = LAYOUT_split_3x5_3(
  QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                    _______, _______, _______,      _______, _______, _______
)

};

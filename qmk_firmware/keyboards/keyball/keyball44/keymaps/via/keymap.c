#include QMK_KEYBOARD_H
#include "quantum.h"

/* ========== カスタムキー ========== */
enum custom_keycodes {
    CLICK_TO0 = SAFE_RANGE,   // USER0
    DBLCLICK_TO0,             // USER1
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_universal(
    KC_ESC , KC_Q , KC_W , KC_E , KC_R , KC_T ,                      KC_Y , KC_U , KC_I , KC_O , KC_P , KC_DEL,
    KC_TAB , KC_A , KC_S , KC_D , KC_F , KC_G ,                      KC_H , KC_J , KC_K , KC_L , KC_SCLN , S(KC_7),
    KC_LSFT, KC_Z , KC_X , KC_C , KC_V , KC_B ,                      KC_N , KC_M , KC_COMM, KC_DOT , KC_SLSH, KC_INT1,
             KC_LALT, KC_LGUI, LCTL_T(KC_LNG2), LT(1,KC_SPC), LT(3,KC_LNG1),
             KC_BSPC, LT(2,KC_ENT), RCTL_T(KC_LNG2), KC_RALT, KC_PSCR
),

/* Layer 1 */
[1] = LAYOUT_universal(
    SSNP_FRE , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,               KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10, KC_F11,
    SSNP_VRT , ______, ______, KC_UP , KC_ENT, KC_DEL,               KC_PGUP, CLICK_TO0, DBLCLICK_TO0, KC_BTN2, KC_BTN3, KC_F12,
    SSNP_HOR , ______, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,          KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, ______, ______,
             ______, ______, ______, ______, ______,
             ______, ______, ______, ______, ______
),

/* 以下はそのまま */
[2] = LAYOUT_universal(
    _______,S(KC_QUOT),KC_7,KC_8,KC_9,S(KC_8),               S(KC_9),S(KC_1),S(KC_6),KC_LBRC,S(KC_4),_______,
    _______,S(KC_SCLN),KC_4,KC_5,KC_6,KC_RBRC,               KC_NUHS,KC_MINS,S(KC_EQL),S(KC_3),KC_QUOT,S(KC_2),
    _______,S(KC_MINS),KC_1,KC_2,KC_3,S(KC_RBRC),            S(KC_NUHS),S(KC_INT1),KC_EQL,S(KC_LBRC),S(KC_SLSH),S(KC_INT3),
             KC_0,KC_DOT,_______,_______,_______,
             KC_DEL,_______,_______,_______,_______
),

[3] = LAYOUT_universal(
    RGB_TOG,AML_TO,AML_I50,AML_D50,_______,_______,          RGB_M_P,RGB_M_B,RGB_M_R,RGB_M_SW,RGB_M_SN,RGB_M_K,
    RGB_MOD,RGB_HUI,RGB_SAI,RGB_VAI,_______,SCRL_DVI,        RGB_M_X,RGB_M_G,RGB_M_T,RGB_M_TW,_______,_______,
    RGB_RMOD,RGB_HUD,RGB_SAD,RGB_VAD,_______,SCRL_DVD,       CPI_D1K,CPI_D100,CPI_I100,CPI_I1K,_______,KBC_SAVE,
             QK_BOOT,KBC_RST,_______,_______,_______,
             _______,_______,_______,KBC_RST,QK_BOOT
),

[4] = LAYOUT_universal(
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
             _______, _______, _______, EE_CLR, _______,    _______, _______, _______, _______, _______
),

[5] = LAYOUT_universal(
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
),

[6] = LAYOUT_universal(
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
             _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
)

};
// clang-format on

/* ========== カスタムキー動作 ========== */
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        /* USER0：クリック＋Layer0復帰 */
        case CLICK_TO0:
            if (record->event.pressed) {
                register_code(KC_BTN1);
            } else {
                unregister_code(KC_BTN1);
                layer_move(0);
            }
            return false;

        /* USER1：ダブルクリック＋Layer0復帰 */
        case DBLCLICK_TO0:
            if (record->event.pressed) {
                tap_code(KC_BTN1);
                wait_ms(30);
                tap_code(KC_BTN1);
                layer_move(0);
            }
            return false;
    }
    return true;
}

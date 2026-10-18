/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_DEL   ,
    KC_TAB   , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                        KC_H     , KC_J     , KC_K     , KC_L     , KC_SCLN  , S(KC_7)  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_INT1  ,
              KC_LALT  , KC_LGUI  , LCTL_T(KC_LNG2), LT(1,KC_SPC), LT(3,KC_LNG1),                 KC_BSPC  , LT(2,KC_ENT), RCTL_T(KC_LNG2), KC_RALT  , KC_PSCR
  ),

  [1] = LAYOUT_universal(
    SSNP_FRE , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                        KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    SSNP_VRT , _______  , _______  , KC_UP    , KC_ENT   , KC_DEL   ,                                        KC_PGUP  , QK_USER_0  , QK_USER_1  , KC_BTN2  , KC_BTN3  , KC_F12   ,
    SSNP_HOR , _______  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_BSPC  ,                                        KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
               _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , S(KC_QUOT), KC_7    , KC_8     , KC_9      , S(KC_8)   ,                                      S(KC_9)   , S(KC_1)   , S(KC_6)   , KC_LBRC   , S(KC_4)   , _______   ,
    _______  , S(KC_SCLN), KC_4    , KC_5     , KC_6      , KC_RBRC   ,                                      KC_NUHS   , KC_MINS   , S(KC_EQL) , S(KC_3)   , KC_QUOT   , S(KC_2)   ,
    _______  , S(KC_MINS), KC_1    , KC_2     , KC_3      , S(KC_RBRC),                                      S(KC_NUHS), S(KC_INT1), KC_EQL    , S(KC_LBRC), S(KC_SLSH), S(KC_INT3),
               KC_0     , KC_DOT   , _______  , _______   , _______   ,                                      KC_DEL    , _______   , _______   , _______   , _______
  ),

  [3] = LAYOUT_universal(
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  , _______  ,                                        RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , SCRL_DVI ,                                        RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , SCRL_DVD ,                                        CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , _______  , KBC_SAVE ,
               QK_BOOT  , KBC_RST  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , KBC_RST  , QK_BOOT
  ),

  [4] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
               _______  , _______  , _______  , EE_CLR   , _______  ,                                        _______  , _______  , _______  , _______  , _______
  ),

  [5] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
               _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______
  ),

  [6] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______  , _______  ,
               _______  , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______  , _______
  ),
};
// clang-format on

static layer_state_t layer6_return_state = 0;
static uint8_t layer6_lower_layer_request = 0;
static uint8_t layer6_suppressed_for_layer = 0;
static bool layer6_lower_layer_released = false;
static bool layer6_auto_mouse_return = false;
static uint8_t user0_return_layer = 0;

// USER2/USER9/USER10 use delayed layer holds. A quick tap never changes the
// layer, avoiding transient Layer 6 notifications and host-side races.
#define USER_LAYER_HOLD_TERM 150

typedef struct {
    bool pressed;
    bool hold_active;
    uint16_t pressed_at;
    layer_state_t return_state;
} user_layer_hold_t;

// USER2: tap = Layer 0 + Kana, hold = temporary Layer 4.
// USER9/USER10: tap = AutoHotkey wrapper, hold = temporary lower layer.
static user_layer_hold_t user2_layer_hold = {0};
static user_layer_hold_t user9_layer_hold = {0};
static user_layer_hold_t user10_layer_hold = {0};

// USER12: tap = AutoHotkey trigger for "[?]", hold = Left Alt.
static bool user12_pressed = false;
static bool user12_hold_active = false;
static uint16_t user12_pressed_at = 0;

// USER29: tap = Enter, hold = Layer 6 + Left Shift.
static bool user29_pressed = false;
static bool user29_hold_active = false;
static uint16_t user29_pressed_at = 0;

// USER30: tap = Layer 0 + alphanumeric, hold = Left Shift.
static bool user30_pressed = false;
static bool user30_shift_active = false;
static uint16_t user30_pressed_at = 0;

// AutoHotkey uses a short Scroll Lock pulse as an explicit Layer 0 command.
static bool last_scroll_lock_state = false;

static void force_layer0(void);

static void send_ahk_trigger(uint16_t trigger_key) {
    tap_code16(C(A(S(trigger_key))));
}

static void run_user2_tap_action(void) {
    // Remapで動作確認済みの「かな」キーを、Layer 0移動後に直接送る。
    force_layer0();
    tap_code(KC_LNG1);
}

static void run_user30_tap_action(void) {
    // Layer6・Auto Mouse・MO/LTの復元予約を消してからLayer0へ移動する。
    force_layer0();
    send_ahk_trigger(KC_8);
}

static void activate_user12_alt_hold(void) {
    if (!user12_hold_active) {
        user12_hold_active = true;
        register_code(KC_LALT);
    }
}

static void activate_temporary_layer_hold(uint8_t target_layer, bool *hold_active) {
    if (!*hold_active) {
        layer_state_t target_bit = (layer_state_t)1 << target_layer;
        layer_state_t layer6_bit = (layer_state_t)1 << 6;
        *hold_active = true;
        layer_state_set((layer_state | target_bit) & ~layer6_bit);
    }
}

static void begin_user_layer_hold(user_layer_hold_t *state) {
    state->pressed = true;
    state->hold_active = false;
    state->pressed_at = timer_read();
    state->return_state = layer_state;
}

// Returns true only when the completed action was a tap.
static bool finish_user_layer_hold(user_layer_hold_t *state) {
    if (!state->pressed) {
        return false;
    }

    state->pressed = false;
    bool was_tap = !state->hold_active;
    if (!was_tap) {
        layer_state_set(state->return_state);
    }
    state->hold_active = false;
    state->return_state = 0;
    return was_tap;
}

static void scan_user_layer_hold(user_layer_hold_t *state, uint8_t target_layer, uint16_t hold_term) {
    if (state->pressed && !state->hold_active && timer_elapsed(state->pressed_at) >= hold_term) {
        activate_temporary_layer_hold(target_layer, &state->hold_active);
    }
}

static void activate_user30_shift_hold(void) {
    if (!user30_shift_active) {
        user30_shift_active = true;
        register_code(KC_LSFT);
    }
}

static void activate_user29_layer6_shift_hold(void) {
    if (!user29_hold_active) {
        user29_hold_active = true;
        layer_move(6);
        register_code(KC_LSFT);
    }
}

void keyboard_post_init_user(void) {
    last_scroll_lock_state = host_keyboard_led_state().scroll_lock;
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    // Apply the firmware value after Keyball loads its older EEPROM setting.
    set_auto_mouse_timeout(AUTO_MOUSE_TIME);
#endif
}

bool pre_process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Auto Mouse handles non-mouse custom keycodes before process_record_user.
    // Remember whether USER0 started from Layer 6 so its release can restore
    // Layer 6 after the immediate click instead of always going to Layer 0.
    if (keycode == QK_USER_0 && record->event.pressed) {
        user0_return_layer = layer6_auto_mouse_return ? 6 : 0;
    }

    if (user29_pressed && keycode != QK_USER_29 && record->event.pressed) {
        activate_user29_layer6_shift_hold();
    }

    // Shift can be activated before the other key is sent; unlike a layer
    // change, this does not require resolving that key from a different layer.
    if (user30_pressed && keycode != QK_USER_30 && record->event.pressed) {
        activate_user30_shift_hold();
    }

    // Another key pressed during USER12 makes it an Alt hold immediately.
    if (user12_pressed && keycode != QK_USER_12 && record->event.pressed) {
        activate_user12_alt_hold();
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode >= QK_USER_7 && keycode <= QK_USER_28 &&
        keycode != QK_USER_9 && keycode != QK_USER_10 && keycode != QK_USER_12) {
        if (record->event.pressed) {
            // USB keycodes have one gap between F12 and F13.
            uint8_t offset = keycode - QK_USER_7;
            uint8_t trigger_key = offset < 12 ? KC_F1 + offset : KC_F13 + offset - 12;
            send_ahk_trigger(trigger_key);
        }
        return false;
    }

    // Mark standard MO(1-5) and held LT(1-5, kc) events. layer_state_set_user
    // uses the mark to distinguish an intentional hold from auto-mouse Layer 1.
    uint8_t lower_layer = 0;
    if (IS_QK_MOMENTARY(keycode)) {
        lower_layer = QK_MOMENTARY_GET_LAYER(keycode);
    } else if (IS_QK_LAYER_TAP(keycode)) {
        // The release event may have tap.count > 0. Keep the layer number so
        // a tapped LT key clears the pending request instead of leaving stale
        // state that blocks a later Auto Mouse activation from Layer 6.
        lower_layer = QK_LAYER_TAP_GET_LAYER(keycode);
    }

    if (lower_layer >= 1 && lower_layer <= 5) {
        if (record->event.pressed && layer6_suppressed_for_layer == 0) {
            layer6_lower_layer_request = lower_layer;
        } else if (!record->event.pressed) {
            if (layer6_suppressed_for_layer == lower_layer) {
                layer6_lower_layer_released = true;
            } else if (layer6_lower_layer_request == lower_layer) {
                layer6_lower_layer_request = 0;
            }
        }
    }

    switch (keycode) {
        case QK_USER_0:  // USER0
            if (record->event.pressed) {
                // AutoHotkey performs one complete click in a single action.
                // The firmware never stores a mouse-button state, preventing
                // trackball reports from carrying an accidental drag.
                send_ahk_trigger(KC_F23);
            } else {
                // Restore Layer 6 only when USER0 originated there.
                layer_move(user0_return_layer);
                user0_return_layer = 0;
            }
            return false;

        case QK_USER_1:  // USER1
            if (record->event.pressed) {
                // AutoHotkey: double click.
                send_ahk_trigger(KC_1);
                force_layer0();
            }
            return false;

        case QK_USER_2:  // USER2: tap Layer 0 + Kana / hold MO(4)
            if (record->event.pressed) {
                begin_user_layer_hold(&user2_layer_hold);
            } else if (finish_user_layer_hold(&user2_layer_hold)) {
                run_user2_tap_action();
            }
            return false;

        case QK_USER_3:  // USER3: 0492
            if (record->event.pressed) {
                // Send directly from the keyboard so this works even when
                // AutoHotkey has not started yet.
                tap_code(KC_0);
                tap_code(KC_4);
                tap_code(KC_9);
                tap_code(KC_2);
            }
            return false;

        case QK_USER_4:  // USER4: Ctrl+Shift+7, then Hiragana
            if (record->event.pressed) {
                send_ahk_trigger(KC_4);
            }
            return false;

        case QK_USER_5:  // USER5: Win+D, then Alt+F4
            if (record->event.pressed) {
                send_ahk_trigger(KC_5);
            }
            return false;

        case QK_USER_6:  // USER6: Win, then Down
            if (record->event.pressed) {
                send_ahk_trigger(KC_7);
            }
            return false;

        case QK_USER_9:  // tap: wrap with μ, hold: MO(2)
            if (record->event.pressed) {
                begin_user_layer_hold(&user9_layer_hold);
            } else if (finish_user_layer_hold(&user9_layer_hold)) {
                send_ahk_trigger(KC_F3);
            }
            return false;

        case QK_USER_10:  // tap: wrap with η, hold: MO(5)
            if (record->event.pressed) {
                begin_user_layer_hold(&user10_layer_hold);
            } else if (finish_user_layer_hold(&user10_layer_hold)) {
                send_ahk_trigger(KC_F4);
            }
            return false;

        case QK_USER_12:  // USER12: tap "[?]" / hold Left Alt
            if (record->event.pressed) {
                user12_pressed = true;
                user12_hold_active = false;
                user12_pressed_at = timer_read();
            } else {
                user12_pressed = false;
                if (user12_hold_active) {
                    unregister_code(KC_LALT);
                    user12_hold_active = false;
                } else {
                    // Same private trigger previously assigned to USER12.
                    send_ahk_trigger(KC_F6);
                }
            }
            return false;

        case QK_USER_29:  // tap Enter / hold Layer 6 + Left Shift
            if (record->event.pressed) {
                user29_pressed = true;
                user29_hold_active = false;
                user29_pressed_at = timer_read();
            } else if (user29_pressed) {
                user29_pressed = false;
                if (user29_hold_active) {
                    unregister_code(KC_LSFT);
                    user29_hold_active = false;
                } else {
                    tap_code(KC_ENT);
                }
            }
            return false;

        case QK_USER_30:  // tap Layer 0 + alphanumeric / hold Left Shift
            if (record->event.pressed) {
                user30_pressed = true;
                user30_shift_active = false;
                user30_pressed_at = timer_read();
            } else if (user30_pressed) {
                user30_pressed = false;
                if (user30_shift_active) {
                    unregister_code(KC_LSFT);
                    user30_shift_active = false;
                } else {
                    run_user30_tap_action();
                }
            }
            return false;
    }
    return true;
}

static void force_layer0(void) {
    // Cancel every deferred "return to Layer 6" state before changing layers.
    // Otherwise layer_state_set_user() can immediately restore Layer 6 and
    // negate the explicit Layer 0 request from AutoHotkey.
    layer6_auto_mouse_return = false;
    layer6_return_state = 0;
    layer6_lower_layer_request = 0;
    layer6_suppressed_for_layer = 0;
    layer6_lower_layer_released = false;
    user0_return_layer = 0;
    user2_layer_hold = (user_layer_hold_t){0};
    user9_layer_hold = (user_layer_hold_t){0};
    user10_layer_hold = (user_layer_hold_t){0};
    if (user12_hold_active) {
        unregister_code(KC_LALT);
    }
    user12_pressed = false;
    user12_hold_active = false;
    if (user29_hold_active) {
        unregister_code(KC_LSFT);
    }
    user29_pressed = false;
    user29_hold_active = false;
    if (user30_shift_active) {
        unregister_code(KC_LSFT);
    }
    user30_pressed = false;
    user30_shift_active = false;
    layer_move(0);
}

bool led_update_user(led_t led_state) {
    if (led_state.scroll_lock != last_scroll_lock_state) {
        // AutoHotkey explicitly requested Layer 0.
        force_layer0();
    }
    last_scroll_lock_state = led_state.scroll_lock;
    return true;
}

static bool layer6_indicator_active = false;
static int8_t layer6_indicator_pending = -1;
static uint16_t layer6_indicator_changed_at = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    layer_state_t layer6_bit = (layer_state_t)1 << 6;
    layer_state_t mouse_layer_bit = (layer_state_t)1 << AUTO_MOUSE_DEFAULT_LAYER;

    // Auto Mouse normally stacks Layer 1 under Layer 6, which leaves Layer 6
    // in control. Temporarily suppress Layer 6 while the automatic mouse layer
    // is active, then restore it when Layer 1 times out or USER0 turns it off.
    if (layer6_auto_mouse_return) {
        if ((state & mouse_layer_bit) == 0) {
            state |= layer6_bit;
            layer6_auto_mouse_return = false;
        } else {
            state &= ~layer6_bit;
        }
    }

    // QMK normally stacks lower layers under Layer 6, leaving Layer 6 highest.
    // For an intentional MO/LT hold, temporarily remove Layer 6 and restore the
    // exact previous state when that hold is released.
    if (layer6_suppressed_for_layer != 0) {
        layer_state_t held_layer_bit = (layer_state_t)1 << layer6_suppressed_for_layer;
        if (layer6_lower_layer_released && (state & held_layer_bit) == 0) {
            state |= layer6_return_state;
            layer6_suppressed_for_layer = 0;
            layer6_lower_layer_released = false;
        }
    } else if (layer6_lower_layer_request != 0) {
        layer_state_t held_layer_bit = (layer_state_t)1 << layer6_lower_layer_request;
        if ((state & layer6_bit) != 0 && (state & held_layer_bit) != 0) {
            layer6_return_state = state & ~held_layer_bit;
            state &= ~layer6_bit;
            layer6_suppressed_for_layer = layer6_lower_layer_request;
            layer6_lower_layer_request = 0;
        }
    }

    // A Layer 1 transition with no MO/LT request is an automatic mouse-layer
    // activation. Remember that Layer 6 was the fixed origin and expose Layer 1.
    if (!layer6_auto_mouse_return &&
        layer6_suppressed_for_layer == 0 &&
        layer6_lower_layer_request == 0 &&
        (state & layer6_bit) != 0 &&
        (state & mouse_layer_bit) != 0) {
        layer6_auto_mouse_return = true;
        state &= ~layer6_bit;
    }

    keyball_set_scroll_mode(get_highest_layer(state) == 3);

    // TO(6) / TO(0) do not normally send anything to Windows. Queue a rare
    // shortcut when Layer 6 is entered or left. It is sent from matrix_scan_user
    // after the layer-switching key has finished processing.
    bool layer6_is_active = get_highest_layer(state) == 6;
    if (layer6_is_active != layer6_indicator_active) {
        layer6_indicator_pending = layer6_is_active ? 1 : 0;
        layer6_indicator_changed_at = timer_read();
        layer6_indicator_active = layer6_is_active;
    }

    return state;
}

void matrix_scan_user(void) {
    scan_user_layer_hold(&user2_layer_hold, 4, TAPPING_TERM);
    scan_user_layer_hold(&user9_layer_hold, 2, USER_LAYER_HOLD_TERM);
    scan_user_layer_hold(&user10_layer_hold, 5, USER_LAYER_HOLD_TERM);

    if (user12_pressed && !user12_hold_active && timer_elapsed(user12_pressed_at) >= TAPPING_TERM) {
        activate_user12_alt_hold();
    }

    if (user30_pressed && !user30_shift_active && timer_elapsed(user30_pressed_at) >= TAPPING_TERM) {
        activate_user30_shift_hold();
    }

    if (user29_pressed && !user29_hold_active && timer_elapsed(user29_pressed_at) >= TAPPING_TERM) {
        activate_user29_layer6_shift_hold();
    }

    if (!is_keyboard_master()) {
        return;
    }

    if (layer6_indicator_pending >= 0 && timer_elapsed(layer6_indicator_changed_at) >= 30) {
        uint16_t notification_keycode = layer6_indicator_pending ? C(A(S(KC_6))) : C(A(S(KC_0)));
        layer6_indicator_pending = -1;

        // Do not pause the whole keyboard matrix while notifying AutoHotkey.
        tap_code16(notification_keycode);
    }

}

#ifdef OLED_ENABLE
#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif

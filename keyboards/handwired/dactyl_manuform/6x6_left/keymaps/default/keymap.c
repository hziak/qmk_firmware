#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
//#define _RAISE 2
//
//#define RAISE MO(_RAISE)
#define LOWER TG(_LOWER)
enum {
    TD_F1 = 0,
    TD_F2 = 1,
    TD_F3 = 2,
    TD_F4 = 3,
    TD_F5 = 4,
    TD_F6 = 5,
};
qk_tap_dance_action_t tap_dance_actions[] = {
        //Tap once for Esc, twice for Caps Lock
        [TD_F1]  = ACTION_TAP_DANCE_DOUBLE(KC_F1,KC_AUDIO_MUTE ),
        [TD_F2] = ACTION_TAP_DANCE_DOUBLE(KC_F2, KC_AUDIO_VOL_DOWN) ,
        [TD_F3] = ACTION_TAP_DANCE_DOUBLE(KC_F3,KC_AUDIO_VOL_UP) ,
        [TD_F4] = ACTION_TAP_DANCE_DOUBLE(KC_F4,KC_CALCULATOR) ,
        [TD_F5] = ACTION_TAP_DANCE_DOUBLE(KC_F5,KC_SYSTEM_SLEEP) ,
        [TD_F6] = ACTION_TAP_DANCE_DOUBLE(KC_F6,KC_SYSTEM_WAKE)

// Other declarations would go here, separated by commas, if you have them
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_QWERTY] = LAYOUT_6x6(

        TD(TD_F1)  , TD(TD_F2) , TD(TD_F3) , TD(TD_F4) , TD(TD_F5) , TD(TD_F6) ,
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,
                        KC_LALT,KC_MINS,
        KC_SPC, KC_ENT,
        KC_DEL ,KC_GRAVE,
        LT(_LOWER,KC_APP),KC_LGUI
),
//
[_LOWER] = LAYOUT_6x6(

        KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6  ,
        KC_SYSTEM_WAKE,KC_SYSTEM_SLEEP,KC_SYSTEM_POWER, KC_HASH,KC_DLR ,KC_PERC,
        OUT_USB,KC_TILD,_______,KC_PSCREEN,KC_INSERT,KC_LBRC,
        OUT_AUTO,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,
        OUT_BT,KC_AUDIO_MUTE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,_______,_______,
        KC_CALCULATOR,KC_PSCR,
        KC_ENT,KC_SPC,
        KC_DEL ,KC_GRAVE,
        LT(_QWERTY,KC_APP),KC_LGUI
),
//
//[_RAISE] = LAYOUT_6x6(
//
//        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
//        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC,_______,KC_NLCK,KC_INS ,KC_SLCK,KC_MUTE,
//        _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        KC_RPRN,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_VOLU,
//        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,KC_VOLD,
//        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
//
//        _______,_______,            KC_EQL ,_______,
//        _______,_______,            _______,_______,
//        _______,_______,            _______,_______,
//        _______,_______,            _______,_______
//),

};

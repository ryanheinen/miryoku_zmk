// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


// #undef TAPPING_TERM
// #define TAPPING_TERM 150

#undef U_TAPPING_TERM
#define U_TAPPING_TERM 150

// AUTO_SHIFT_ENABLE=no
// MIRYOKU_ALPHAS=QWERTY
// MIRYOKU_CLIPBOARD=MAC
// CONSOLE_ENABLE=yes


#define MIRYOKU_CLIPBOARD_MAC
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

// #define MASTER_RIGHT true
// #define MIRYOKU_LAYER_NAMES BASE, GAME, BUTTON, NAV, MOUSE, MEDIA, NUM, SYM, FUN

// copy of MIRYOKU_ALTERNATIVES_BASE_QWERTY with KC_SCLN swapped for KC_QUOT
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// // #define MIRYOKU_LAYER_BASE \
// // KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
// // LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_SCLN),   \
// // LT(BUTTON, KC_Z),  ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(BUTTON, KC_SLSH), \
// // U_NP,              U_NP,              LT(MEDIA, KC_ESC), LT(NAV, KC_SPC),   LT(MOUSE, KC_TAB), LT(SYM, KC_ENT),   LT(NUM, KC_BSPC),  LT(FUN, KC_DEL),   U_NP,              U_NP

// // quote instead of semi-colon
#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SQT,           &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// // #define MIRYOKU_LAYER_NUM \
// // KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              U_NA,              U_NA,              U_NA,              RESET,             \
// // KC_QUOT,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
// // KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           U_NA,              U_NA,              U_NA,              KC_ALGR,           U_NA,              \
// // U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// // double quote instead of colon
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp DQT,           &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// // #define MIRYOKU_LAYER_SYM \
// // KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           U_NA,              U_NA,              U_NA,              U_NA,              RESET,             \
// // KC_DQUO,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           U_NA,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
// // KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           U_NA,              U_NA,              U_NA,              KC_ALGR,           U_NA,              \
// // U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING
#define MIRYOKU_LAYER_EXTRA \
&kp O,             &kp I,             &kp U,              &kp Y,             &kp T,                   &kp R,             &kp E,             &kp W,             &kp Q,             &kp TAB,             \
&kp L,             &kp K,             &kp J,              &kp H,             &kp G,                   &kp F,             &kp A,             &kp S,             &kp D,             &kp LSHFT,           \
&kp DOT,           &kp COMMA,         &kp M,              &kp N,             &kp B,                   &kp V,             &kp C,             &kp X,             &kp Z,             &kp LCTRL,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, RET),  U_LT(U_MOUSE, TAB),      &kp SPACE,         &kp BSPC,          &kp DEL,           U_NP,              U_NP

// // U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
// // U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
// // U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// // KC_O,    KC_I,    KC_U,    KC_Y,    KC_T,    KC_R,    KC_E,    KC_W,    KC_Q,    KC_TAB, \
// // KC_L,    KC_K,    KC_J,    KC_H,    KC_G,    KC_F,    KC_A,    KC_S,    KC_D,    KC_LSFT, \
// // KC_DOT,  KC_COMM, KC_M,    KC_N,    KC_B,    KC_V,    KC_C,    KC_X,    KC_Z,    KC_LCTL, \
// // U_NP,    U_NP,    KC_ESC,  KC_ENT,  TO(BASE), KC_SPC,  KC_BSPC, KC_DEL,  U_NP,    U_NP

// // copy of MIRYOKU_ALTERNATIVES_MOUSE with GAME toggle added
// #define MIRYOKU_LAYER_MOUSE \
// U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
// &kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
// U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              TG(EXTRA),              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
// U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
// // #define MIRYOKU_LAYER_MOUSE \
// // RESET,             U_NA,              U_NA,              U_NA,              U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
// // KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
// // U_NA,              KC_ALGR,           U_NA,              U_NA,              U_NA,              TG(GAME),         KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
// // U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN1,           KC_BTN3,           KC_BTN2,           U_NP,              U_NP

// /*

// // users\manna-harbour_miryoku\miryoku_babel\miryoku_alternatives.h

// // #define MIRYOKU_LAYER_MEDIA \
// // RESET,             U_NA,              U_NA,              U_NA,              U_NA,              KC_WBAK,           RGB_MOD,           RGB_HUI,           KC_WFWD,           RGB_VAI,           \
// // KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           OUT_AUTO,          \
// // U_NA,              KC_ALGR,           U_NA,              U_NA,              U_NA,              U_NU,              U_NU,              U_NU,              U_NU,              U_NU,              \
// // U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP
//  */

// #if defined (KEYBOARD_crkbd)
// // #endif

// #define U_MOUSE_MOVE_MAX 4800                     /* <--- New max speed setting (default: 600) */
// #undef MOVE_UP
// #undef MOVE_DOWN
// #undef MOVE_LEFT
// #undef MOVE_RIGHT
// #define MOVE_UP MOVE_VERT(-U_MOUSE_MOVE_MAX)
// #define MOVE_DOWN MOVE_VERT(U_MOUSE_MOVE_MAX)
// #define MOVE_LEFT MOVE_HOR(-U_MOUSE_MOVE_MAX)
// #define MOVE_RIGHT MOVE_HOR(U_MOUSE_MOVE_MAX)

// // &mmv {
// // 	time-to-max-speed-ms = <400>;             /* <--- How long time until max speed is reached (default: 500) */
// // };

// #define U_MOUSE_SCROLL_MAX 5                    /* <--- New max speed setting (default: 10) */

// #undef SCROLL_UP
// #undef SCROLL_DOWN
// #undef SCROLL_LEFT
// #undef SCROLL_RIGHT
// #define SCROLL_UP SCROLL_VERT(U_MOUSE_SCROLL_MAX)
// #define SCROLL_DOWN SCROLL_VERT(-U_MOUSE_SCROLL_MAX)
// #define SCROLL_LEFT SCROLL_HOR(-U_MOUSE_SCROLL_MAX)
// #define SCROLL_RIGHT SCROLL_HOR(U_MOUSE_SCROLL_MAX)

// // &mwh {
// //   time-to-max-speed-ms = <500>;                 /* <--- How long time until max speed is reached */
// // };
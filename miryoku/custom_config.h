// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #undef TAPPING_TERM
// #define TAPPING_TERM 150

#undef U_TAPPING_TERM
#define U_TAPPING_TERM 150

// AUTO_SHIFT_ENABLE=no
//#define MIRYOKU_ALPHAS_QWERTY
// MIRYOKU_CLIPBOARD=MAC
// CONSOLE_ENABLE=yes


// #define MASTER_RIGHT true
// #define MIRYOKU_LAYER_NAMES BASE, EXTRA, BUTTON, NAV, MOUSE, MEDIA, NUM, SYM, FUN, NUM_FLIP, FUN_FLIP


// makes undo perform left shift z rather than y
// #define MIRYOKU_CLIPBOARD_MAC

// enable mouse keys pr
// #define MIRYOKU_KLUDGE_MOUSEKEYSPR

// copy of MIRYOKU_ALTERNATIVES_BASE_QWERTY with KC_SCLN swapped for KC_QUOT
#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
U_MT(LGUI, A),     U_MT(LALT, S),     U_MT(LCTRL, D),    U_MT(LSHFT, F),    &kp G,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SEMI),   \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// quote instead of semi-colon
#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SQT,           &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// double quote instead of colon
#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp DQT,           &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// mirrored base layer, with A and D swapped
#define MIRYOKU_LAYER_EXTRA \
&kp O,             &kp I,             &kp U,              &kp Y,             &kp T,                   &kp R,             &kp E,             &kp W,             &kp Q,             &kp TAB,             \
&kp L,             &kp K,             &kp J,              &kp H,             &kp G,                   &kp F,             &kp A,             &kp S,             &kp D,             &kp LSHFT,           \
&kp DOT,           &kp COMMA,         &kp M,              &kp N,             &kp B,                   &kp V,             &kp C,             &kp X,             &kp Z,             &kp LCTRL,           \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, RET),  U_LT(U_MOUSE, TAB),      &kp SPACE,         U_LT(U_FUN_FLIP, ESC),  U_LT(U_NUM_FLIP, LALT), U_NP,              U_NP

// copy of MIRYOKU_ALTERNATIVES_NUM_FLIP with SEMI replaced with N0, and right thumbs replaced with NA
#define MIRYOKU_LAYER_NUM_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp N0,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA               U_NA,              U_NA,              U_NP,              U_NP

// copy of MIRYOKU_ALTERNATIVES_FUN_FLIP with right thumbs replaced with to NA
#define MIRYOKU_LAYER_FUN_FLIP \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
U_NA,              &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// copy of MIRYOKU_ALTERNATIVES_MOUSE with GAME toggle added
#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun")
MIRYOKU_X(NUM_FLIP,    "Num Flip") \
MIRYOKU_X(FUN_FLIP,    "Fun Flip")

#define MIRYOKU_LAYERMAPPING_NUM_FLIP MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_FUN_FLIP MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_NUM_FLIP 10
#define U_FUN_FLIP    11
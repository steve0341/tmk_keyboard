/* 
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    // Layer 0: Linux Layer
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           FN13,Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCOLON,   LBRC,RBRC,FN12,  \
           BSPC,A,   R,   FN10,T,   D,   H,   N,   FN11,I,   O,        QUOT,ENT,                \
           LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     RSFT,FN0,              \
                LALT,LGUI,          FN6,                RGUI,FN1),

    //Layer 1: League Layer
    KEYMAP(ESC, 1,   2,   3,   4,  5,   6,   7,   8,   9,   0,  F11, F12, INS, DEL,   \
           FN13,Q,   W,   F,   P,  G,   J,   L,   U,   Y,   NO, NO, NO, FN12,      \
           FN7, A,   R,   S,   T,  D,   H,   N,   E,   I,   O,  NO, ENT,            \
           LSFT,Z,   X,   C,   V,  B,   K,   M,   COMM,DOT, SLSH, RSFT,FN0,            \
                NO,NO,             SPC,                NO,NO),

    // Layer 2: Mac Layer
     KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
            FN13,Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCOLON,   LBRC,RBRC,FN12,  \
            BSPC,A,   R,   FN10,T,   D,   H,   N,   FN11,I,   O,        QUOT,ENT,                \
            LSFT,Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     RSFT,NO,              \
                 LALT,LCTL,          FN5,                RCTL,FN1),

    //Layer 3: Mouse Layer
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           FN13,NO,  WH_U,MS_U,WH_D,NO,  NO,  PGUP,UP,  PGDN,NO,  NO,  NO, BSPC,      \
           NO,  WH_L,MS_L,MS_D,MS_R,WH_R,PSCR,BTN1,TRNS,BTN2,NO,  NO,  ENT,            \
           LSFT,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  RSFT,NO, \
           NO,NO,            \
                NO,  NO,             BTN1,                   NO,  NO),

    // Layer 4: Arrow keys
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           FN13,NO,  WH_U,MS_U,WH_D,NO,  NO,  PGUP,UP,  PGDN,NO,  NO,  NO,  BSPC,      \
           NO,  WH_L,MS_L,TRNS,MS_R,WH_R,WBAK,LEFT,DOWN,RGHT,WFWD,  NO,  ENT,            \
           LSFT,NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  RSFT,NO, \
           NO,  NO,              \
                NO,  NO,            FN5,               NO,  NO),

    // Layer 5: Additional Keys
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
               FN13,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS, UP, TRNS, FN12,      \
               TRNS,TRNS,MUTE,VOLD,VOLU,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,PENT,            \
               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,TRNS,TRNS,            \
                    TRNS,TRNS,          TRNS,               TRNS,TRNS)
};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif

    [0] = ACTION_LAYER_TOGGLE(1),                   // League layer
    [1] = ACTION_LAYER_TOGGLE(2),                   // Mac layer
    //[2] = 
    //[3] = 
    //[4] = 

    [5] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_SPC),    // Linux: SUPER | SPACE
    [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPC),    // Mac: COMMAND | SPACE
    [7] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),   // League: COMMAND | SPACE
    // [8] = ACTION_MODS_TAP_KEY(),
    // [9] = ACTION_MODS_TAP_KEY(),

    [10] = ACTION_LAYER_TAP_KEY(4, KC_S),           // Mouse Layer | Colemak: S    
    [11] = ACTION_LAYER_TAP_KEY(3, KC_E),           // Arrow Layer | Colemak: E
    [12] = ACTION_LAYER_TAP_KEY(5, KC_BSPC),            // Backspace | Layer 5
    [13] = ACTION_LAYER_TAP_KEY(5, KC_TAB)            // Backspace | Layer 5
    // [13] = ACTION_LAYER_TAP_KEY(),
    // [14] = ACTION_LAYER_TAP_KEY(),



};












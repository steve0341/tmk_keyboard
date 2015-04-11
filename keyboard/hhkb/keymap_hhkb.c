/* 
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV,   \
           TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCOLON,   LBRC,RBRC,BSPC,  \
           FN4, A,   R,   S,   T,   D,   H,   N,   E,   I,   O,        QUOT,FN5,                \
           FN3, Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,     FN3,FN0,              \
                LALT,LGUI,          FN1,                RGUI,RALT),

    /* Layer 1: League gamemode
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */ 
    KEYMAP(ESC, 1,   2,   3,   4,  5,   6,   7,   8,   9,   0,  F11, F12, INS, DEL,   \
           TAB, Q,   W,   F,   P,  G,   J,   L,   U,   Y,   NO, NO, NO, BSPC,      \
           FN6, A,   R,   S,   T,  D,   H,   N,   E,   I,   O,  NO,ENT,            \
           LSFT,Z,   X,   C,   V,  B,   K,   M,   COMM,DOT, SLSH, RSFT,FN0,            \
                NO,NO,          SPC,               NO,NO),

    /* Layer 3: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */ 
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,   \
           CAPS,TRNS,WH_U,MS_U,WH_D,TRNS,TRNS,PGUP,UP,PGDN,TRNS, TRNS, TRNS, BSPC,      \
           FN4,WH_L,MS_L,MS_D,MS_R,WH_R,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,FN5,            \
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, TRNS,TRNS
           ,TRNS,TRNS,            \
                TRNS,TRNS,          BTN1,               TRNS,TRNS),

};

/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const uint16_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const uint16_t fn_actions[] PROGMEM = {
#endif
    [0] = ACTION_LAYER_TOGGLE(1),                // Layer 1
    [1] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_SPC),    // Control / Space
    [2] = ACTION_MODS_TAP_KEY(MOD_RSFT, ACTION_KEY(ACTION_MODS_KEY(MOD_RSFT, KC_0))),    // Shift / Delete
    [3] = ACTION_MODS_TAP_KEY(MOD_LSFT, ACTION_KEY(ACTION_MODS_KEY(MOD_LSFT, KC_9))),  // Paren / Arrow keys
    [4] = ACTION_LAYER_TAP_KEY(2, KC_BSPC),    // Backspace / Mouse
    [5] = ACTION_LAYER_TAP_KEY(2, KC_ENT),     // Enter / Arrows
    [6] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC)     // Enter / Arrows

};

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5359
#define PRODUCT_ID      0x4e34
#define DEVICE_VER      0x0001
#define MANUFACTURER    sendyyeah
#define PRODUCT         Nakal4x
#define DESCRIPTION     4x macropad and encoder by sendyyeah

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { C6, D7, E6, B4, F6 }, \
}

#define ENCODERS_PAD_A { B1 }
#define ENCODERS_PAD_B { B3 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// #define RGB_DI_PIN B5
// #ifdef RGB_DI_PIN
// #define RGBLED_NUM 5
// #define RGBLIGHT_HUE_STEP 8
// #define RGBLIGHT_SAT_STEP 8
// #define RGBLIGHT_VAL_STEP 8
// #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
// #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
// #define RGBLIGHT_ANIMATIONS
// #define RGBLIGHT_LAYERS
// #define RGBLIGHT_LAYER_BLINK
// #endif

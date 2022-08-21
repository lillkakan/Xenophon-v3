#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC7AD
#define PRODUCT_ID      0x0E09
#define DEVICE_VER      0x0001
#define MANUFACTURER    @lillkakan
#define PRODUCT         xenophon

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, B5, B6, B7, D0 }
#define MATRIX_COL_PINS { D1, D2, D3, D4, D5, D6, D7 }

/* Define spit attributes */
//#define SPLIT_HAND_PIN B0 // old

#define MASTER_LEFT

#define SOFT_SERIAL_PIN E6

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed */
// DEBOUNCING_DELAY in config.h is no longer a valid option and should be replaced with DEBOUNCE
#define DEBOUNCE 0

/* Makes tapping easyer */
#define TAPPING_TERM 150

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command 
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
*/

/* prevent stuck modifiers */
// PREVENT_STUCK_MODIFIERS in config.h is no longer a valid option and should be removed
//#define PREVENT_STUCK_MODIFIERS

#endif
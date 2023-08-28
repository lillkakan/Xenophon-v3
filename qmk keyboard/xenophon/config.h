#ifndef CONFIG_H
#define CONFIG_H

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

#define MASTER_LEFT

#define SOFT_SERIAL_PIN E6

#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 0

/* Makes tapping easyer */
#define TAPPING_TERM 150

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#endif
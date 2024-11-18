/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}

#define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }

#define DYNAMIC_KEYMAP_LAYER_COUNT 6

#define LED_CAPS_LOCK_PIN 24
#define LED_PIN_ON_STATE 0
/*#define MOUSEKEY_INERTIA*/

// Mouse key speed and acceleration.
/*#undef MOUSEKEY_DELAY*/
/*#define MOUSEKEY_DELAY          0*/
/*#undef MOUSEKEY_INTERVAL*/
/*#define MOUSEKEY_INTERVAL       16*/
/*#undef MOUSEKEY_WHEEL_DELAY*/
/*#define MOUSEKEY_WHEEL_DELAY    0*/
/*#undef MOUSEKEY_MAX_SPEED*/
/*#define MOUSEKEY_MAX_SPEED      6*/
/*#undef MOUSEKEY_TIME_TO_MAX*/
/*#define MOUSEKEY_TIME_TO_MAX    64*/


#define SPLIT_LAYER_STATE_ENABLE
#define TAPPING_TERM 175
#define PERMISSIVE_HOLD
#define QUICK_TAP_TERM_PER_KEY
#define TAPPING_FORCE_HOLD

/*#undef WS2812_DI_PIN*/
/*#define WS2812_DI_PIN 25*/
/*#undef RGBLED_NUM*/
/*#define RGBLED_NUM 2*/
/*#undef RGBLED_SPLIT*/
/*#define RGBLED_SPLIT {1, 1}*/

// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 16
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 60
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 50
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100



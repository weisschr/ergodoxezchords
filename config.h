/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef TAPPING_TERM
#define TAPPING_TERM 173

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 15

#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 2

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 11

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 67

#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"XNzX6/JxYbW"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT

/*

  My additions

*/

#define COMBO_COUNT 14

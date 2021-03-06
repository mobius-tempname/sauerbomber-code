#pragma once

#include <SDL.h>
#include <include/cef_base.h>
#include <stdint.h>       // for uint16_t

#include "SDL_keycode.h"  // for SDL_Keycode

extern int getKeyboardModifiers(uint16_t const mod);

extern uint16_t convertSDLtoJSKeyCode(SDL_Keycode sdl_keycode, bool shift = false, bool numlock = false);

/// Javascript key codes
enum {
    JSK_BACKSPACE       =  8,
    JSK_TAB             =  9,
    JSK_NUM5_SECOND    =  12,
    JSK_ENTER          =  13,
    JSK_SHIFT          =  16,
    JSK_CTRL           =  17,
    JSK_LEFT_ALT       =  18,
    JSK_PAUSE          =  19,
    JSK_CAPS_LOCK      =  20,
    JSK_ESCAPE         =  27,
    JSK_SPACE          =  32,
    JSK_PAGE_UP        =  33,
    JSK_PAGE_DOWN      =  34,
    JSK_END            =  35,
    JSK_HOME           =  36,
    JSK_LEFT_ARROW     =  37,
    JSK_UP_ARROW       =  38,
    JSK_RIGHT_ARROW    =  39,
    JSK_DOWN_ARROW     =  40,
    JSK_INSERT         =  45,
    JSK_DELETE         =  46,
    JSK_0              =  48,
    JSK_1              =  49,
    JSK_2              =  50,
    JSK_3              =  51,
    JSK_4              =  52,
    JSK_5              =  53,
    JSK_6              =  54,
    JSK_7              =  55,
    JSK_8              =  56,
    JSK_9              =  57,
    JSK_A              =  65,
    JSK_B              =  66,
    JSK_C              =  67,
    JSK_D              =  68,
    JSK_E              =  69,
    JSK_F              =  70,
    JSK_G              =  71,
    JSK_H              =  72,
    JSK_I              =  73,
    JSK_J              =  74,
    JSK_K              =  75,
    JSK_L              =  76,
    JSK_M              =  77,
    JSK_N              =  78,
    JSK_O              =  79,
    JSK_P              =  80,
    JSK_Q              =  81,
    JSK_R              =  82,
    JSK_S              =  83,
    JSK_T              =  84,
    JSK_U              =  85,
    JSK_V              =  86,
    JSK_W              =  87,
    JSK_X              =  88,
    JSK_Y              =  89,
    JSK_Z              =  90,
    JSK_LEFT_WIN       =  91,
    JSK_RIGHT_WIN      =  92,
    JSK_SELECT         =  93,
    JSK_NUM_0          =  96,
    JSK_NUM_1          =  97,
    JSK_NUM_2          =  98,
    JSK_NUM_3          =  99,
    JSK_NUM_4         =  100,
    JSK_NUM_5         =  101,
    JSK_NUM_6         =  102,
    JSK_NUM_7         =  103,
    JSK_NUM_8         =  104,
    JSK_NUM_9         =  105,
    JSK_MULTIPLY      =  106,
    JSK_ADD           =  107,
    JSK_NUM_DECIMAL_COMMA = 108,
    JSK_SUBTRACT      =  109,
    JSK_DECIMAL_POINT =  110,
    JSK_DIVIDE        =  111,
    JSK_F1            =  112,
    JSK_F2            =  113,
    JSK_F3            =  114,
    JSK_F4            =  115,
    JSK_F5            =  116,
    JSK_F6            =  117,
    JSK_F7            =  118,
    JSK_F8            =  119,
    JSK_F9            =  120,
    JSK_F10           =  121,
    JSK_F11           =  122,
    JSK_F12           =  123,

    JSC_BRACE_LEFT    =  123,
    JSC_PIPE          =  124,
    JSC_BRACE_RIGHT   =  125,
    JSC_TILDE         =  126,
    JSC_DELETE        =  127,

    JSK_NUM_LOCK      =  144,
    JSK_SCROLL_LOCK   =  145,

    JSK_SEMI_COLON    =  186,
    JSK_EQUAL_SIGN    =  187,
    JSK_COMMA         =  188,
    JSK_DASH          =  189,
    JSK_PERIOD        =  190,
    JSK_FORWARD_SLASH =  191,
    JSK_GRAVE_ACCENT  =  192,

    JSK_OPEN_BRACKET  =  219,
    JSK_BACK_SLASH    =  220,
    JSK_CLOSE_BRACKET =  221,
    JSK_SINGLE_QUOTE  =  222,
    JSK_RIGHT_ALT     =  225,

    JSC_DOUBLE_QUOTE   =  34,
    JSC_HASH           =  35,
    JSC_DOLLAR         =  36,
    JSC_PERCENT        =  37,
    JSC_AMPERSAND      =  38,
    JSC_SINGLE_QUOTE   =  39,
    JSC_PARENTHESES_LEFT   = 40,
    JSC_PARENTHESES_RIGHT  = 41,
    JSC_ASTERISK       =  42,
    JSC_NUM_MULTIPLY   =  42,
    JSC_PLUS           =  43,
    JSC_NUM_ADD        =  43,
    JSC_COMMA          =  44,
    JSC_SUBTRACT       =  45,
    JSC_NUM_SUBTRACT   =  45,
    JSC_SLASH          =  47,
    JSC_NUM_DIVIDE     =  47,
    JSC_SEMI_COLON     =  59,
    JSC_EXCLAIM        =  33,
    JSC_EQUAL          =  61,
    JSC_QUESTION       =  63,
    JSC_BRACKET_LEFT   =  91,
    JSC_BACK_SLASH     =  92,
    JSC_BRACKET_RIGHT  =  93,
    JSC_UNDERSCORE     =  95
};

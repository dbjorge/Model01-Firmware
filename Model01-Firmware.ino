// -*- mode: c++ -*-

#include <Kaleidoscope.h>
#include <Kaleidoscope-LEDControl.h>

#define Key_Underscore LSHIFT(Key_Minus)

// *INDENT-OFF*
enum { PRIMARY, SECONDARY }; // layers
KEYMAPS(
  [PRIMARY] = KEYMAP_STACKED
  (XXX,             Key_1, Key_2, Key_3, Key_4, Key_5, Key_6,
   Key_Backtick,    Key_Q, Key_W, Key_E, Key_R, Key_T, Key_LeftParen,
   Key_Tab,         Key_A, Key_S, Key_D, Key_F, Key_G,
   LSHIFT(Key_Tab), Key_Z, Key_X, Key_C, Key_V, Key_B, Key_LeftCurlyBracket,
   Key_LeftControl, Key_Backspace, Key_Delete, Key_LeftGui,
   ShiftToLayer(SECONDARY),

   Key_5,                 Key_6, Key_7, Key_8,     Key_9,         Key_0,         ___,
   Key_RightParen,        Key_Y, Key_U, Key_I,     Key_O,         Key_P,         Key_Equals,
                          Key_H, Key_J, Key_K,     Key_L,         Key_Semicolon, Key_Quote,
   Key_RightCurlyBracket, Key_N, Key_M, Key_Comma, Key_Period,    Key_Slash,     Key_Backslash,
   Key_RightControl, Key_Enter, Key_Spacebar, Key_LeftAlt,
   Key_RightShift),

  [SECONDARY] =  KEYMAP_STACKED
  (___, Key_F1,        Key_F2,        Key_F3,        Key_F4,         Key_F5,    Key_F6,
   ___, Key_Escape,    Key_Home,      Key_UpArrow,   Key_End,        Key_F12,   Key_LeftBracket,
   ___, Key_LeftShift, Key_LeftArrow, Key_DownArrow, Key_RightArrow, Key_Spacebar,
   ___, ___,           ___,           ___,           ___,            ___,       ___,
   ___, ___, ___, ___,
   ___,

   Key_F5,           Key_F6,         Key_F7, Key_F8, Key_F9, Key_F10, Key_F11,
   Key_RightBracket, Key_Underscore, Key_7,  Key_8,  Key_9,  ___,     ___,
                     Key_Minus,      Key_4,  Key_5,  Key_6,  ___,     ___,
   ___,              Key_0,          Key_1,  Key_2,  Key_3,  ___,     ___,
   ___, ___, ___, ___,
   ___)
)
// *INDENT-ON*

KALEIDOSCOPE_INIT_PLUGINS(LEDControl, LEDOff);

void setup() {
  Kaleidoscope.setup();
}

void loop() {
  Kaleidoscope.loop();
}

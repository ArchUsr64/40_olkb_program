#pragma once

#define NA '_'

#define KEY_TYPE_ARRAY                                                         \
  {                                                                            \
    {                                                                          \
        SPECIAL_KEY, WRITING_KEY, WRITING_KEY, WRITING_KEY,                    \
        WRITING_KEY, WRITING_KEY, WRITING_KEY, WRITING_KEY,                    \
        WRITING_KEY, WRITING_KEY, WRITING_KEY, WRITING_KEY,                    \
    },                                                                         \
        {                                                                      \
            MODIFIER_KEY, WRITING_KEY, WRITING_KEY, WRITING_KEY,               \
            WRITING_KEY,  WRITING_KEY, WRITING_KEY, WRITING_KEY,               \
            WRITING_KEY,  WRITING_KEY, WRITING_KEY, MODIFIER_KEY,              \
        },                                                                     \
        {                                                                      \
            MODIFIER_KEY, WRITING_KEY, WRITING_KEY, WRITING_KEY,               \
            WRITING_KEY,  WRITING_KEY, WRITING_KEY, WRITING_KEY,               \
            WRITING_KEY,  WRITING_KEY, WRITING_KEY, MODIFIER_KEY,              \
        },                                                                     \
        {                                                                      \
            MOUSE_KEY,   MOUSE_KEY,   MOUSE_KEY,    MOUSE_KEY,                 \
            SPECIAL_KEY, SPECIAL_KEY, WRITING_KEY,  SPECIAL_KEY,               \
            MOUSE_KEY,   MOUSE_KEY,   MODIFIER_KEY, SPECIAL_KEY,               \
        },                                                                     \
  }

#define MODIFIER_KEY_ARRAY                                                     \
  {                                                                            \
    {                                                                          \
        NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                        \
    },                                                                         \
        {                                                                      \
            KEY_LEFT_CONTROL,  NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,         \
            KEY_RIGHT_CONTROL,                                                 \
        },                                                                     \
        {                                                                      \
            KEY_LEFT_SHIFT,  NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,           \
            KEY_RIGHT_SHIFT,                                                   \
        },                                                                     \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, KEY_LEFT_ALT, NA,          \
        },                                                                     \
  }

#define SPECIAL_KEY_ARRAY                                                      \
  {                                                                            \
    {                                                                          \
        KEY_TAB, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                   \
    },                                                                         \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                    \
        },                                                                     \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                    \
        },                                                                     \
        {                                                                      \
            NA,                                                                \
            NA,                                                                \
            NA,                                                                \
            NA,                                                                \
            KEY_BACKSPACE,                                                     \
            KEY_RETURN,                                                        \
            KEY_SPACE,                                                         \
            KEY_BACKSPACE,                                                     \
            NA,                                                                \
            NA,                                                                \
            NA,                                                                \
            KEY_ESC,                                                           \
        },                                                                     \
  }

#define MOUSE_KEY_ARRAY                                                        \
  {                                                                            \
    {                                                                          \
        NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                        \
    },                                                                         \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                    \
        },                                                                     \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA, NA,                    \
        },                                                                     \
        {                                                                      \
            MOUSE_LEFT,                                                        \
            MOUSE_DOWN,                                                        \
            MOUSE_UP,                                                          \
            MOUSE_RIGHT,                                                       \
            NA,                                                                \
            NA,                                                                \
            NA,                                                                \
            NA,                                                                \
            MOUSE_LEFT_BUTTON,                                                 \
            MOUSE_RIGHT_BUTTON,                                                \
            NA,                                                                \
            NA,                                                                \
        },                                                                     \
  }

#define WRITING_KEY_ARRAY                                                      \
  {                                                                            \
    {                                                                          \
        NA, 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '\'',            \
    },                                                                         \
        {                                                                      \
            NA, 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', NA,          \
        },                                                                     \
        {                                                                      \
            NA, 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', NA,          \
        },                                                                     \
        {                                                                      \
            NA, NA, NA, NA, NA, NA, NA, ' ', NA, NA, NA, NA,                   \
        },                                                                     \
  }

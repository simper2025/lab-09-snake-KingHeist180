#include "Keyboard.h"
#include <conio.h>

#define key_UP 72
#define key_DOWN 80
#define key_LEFT 75
#define key_RIGHT 77
#define key_ESCAPE 27

const KeyCommand Keyboard::keyPressed() const
{
    int keypress = _getch();
    if (_kbhit())
    {
        switch (keypress)
        {
        case key_LEFT: return KeyCommand::Left;
        case key_RIGHT: return KeyCommand::Right;
        case key_UP: return KeyCommand::Up;
        case key_DOWN: return KeyCommand::Down;
        default: return KeyCommand::None;
        }
    }
    return KeyCommand::None;
}

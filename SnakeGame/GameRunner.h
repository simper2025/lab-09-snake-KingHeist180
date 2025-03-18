#pragma once
#include "Keyboard.h"
#include "KeyCommand.h"

using namespace std;

class GameRunner
{
private:
    KeyCommand keypress;
    Keyboard press;
    float fracSec;
public:
    GameRunner(float value) { fracSec = value; }
    void runGame();
};


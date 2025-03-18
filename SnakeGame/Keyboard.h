#pragma once
#include "point.h"
#include "KeyCommand.h"

using namespace std;

class Keyboard
{
public:
    const KeyCommand keyPressed() const;
};
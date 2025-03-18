#pragma once
#include <windows.h>
#include <conio.h>
#include "point.h"

using namespace std;

class Console
{
private:
    static void setcolor(WORD color)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
        return;
    }

    static void gotoxy(int x, int y)
    {
        COORD coord;
        coord.X = x; coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        return;
    }

public:
    static void txtPlot(point item, unsigned char Color)
    {
        setcolor(Color);
        gotoxy(item.x * 2, item.y);
        _cprintf("  ");
    }
};


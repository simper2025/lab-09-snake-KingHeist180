#pragma once
#include <windows.h>
#include <conio.h>
#include <vector>
#include <ctime>
#include <chrono>
#include "point.h"
#include "Keyboard.h"
#include "KeyCommand.h"
#include "Console.h"

using namespace std;

class GameRunner
{
private:
    KeyCommand keypress;
    Keyboard press;
    float fracSec;
public:
    GameRunner(float value) {
        fracSec = value;
    }

    void runGame() {
        chrono::time_point<chrono::system_clock> runTime;
        chrono::time_point<chrono::system_clock> currentTime;
        runTime = std::chrono::system_clock::now();
        Sleep(300);

        point playerloc = { 0, 10 };
        point direction = { 1, 0 };
        int length = 5;

        //Loop to start drawing and playing.
        keypress = press.keyPressed();
        while (keypress != KeyCommand::Quit) {

            direction = keyPressed(direction);

            currentTime = chrono::system_clock::now();

            double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
            if (elapsedTime > 0.3 * 1000) {
                runTime = chrono::system_clock::now();

                //Most of your game logic goes here.

                txtPlot(playerloc, 31);

                setcolor(15);
                gotoxy(1, 21);
                _cprintf("Length: %i", length);
            }
            Sleep(10);
        }
    }
};


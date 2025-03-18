#include "GameRunner.h"
#include <windows.h>
#include <conio.h>
#include <vector>
#include <ctime>
#include <chrono>
#include "point.h"
#include "Console.h"

void GameRunner::runGame()
{
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

        keypress = press.keyPressed();

        currentTime = chrono::system_clock::now();

        double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
        if (elapsedTime > fracSec * 1000) {
            runTime = chrono::system_clock::now();

            Console::txtPlot(playerloc, 31);

            //_cprintf("Length: %i", length);
        }
        Sleep(10);
    }
}

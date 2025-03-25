#include "GameRunner.h"
#include <windows.h>
#include <conio.h>
#include <ctime>
#include <chrono>
#include "point.h"
#include "Console.h"
#include "Snake.h"
#include "Mouse.h"

void GameRunner::runGame()
{
    chrono::time_point<chrono::system_clock> runTime;
    chrono::time_point<chrono::system_clock> currentTime;
    runTime = std::chrono::system_clock::now();
    Sleep(300);

    Snake snake = Snake(68, 204);
    //Loop to start drawing and playing.
    keypress = press.keyPressed();
    while (keypress != KeyCommand::Quit) {

        snake.DrawSnake();

        keypress = press.keyPressed();
        snake.SetDirection(keypress);

        currentTime = chrono::system_clock::now();

        double elapsedTime = chrono::duration_cast<chrono::milliseconds>(currentTime - runTime).count();
        if (elapsedTime > 1000/ fracSec) {
            runTime = chrono::system_clock::now();

            snake.move();
            Console::txtPlot(snake.GetHead(), 31);

            //_cprintf("Length: %i", length);
        }
        Sleep(10);
    }
}

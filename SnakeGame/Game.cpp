#include "GameRunner.h"
#include <conio.h>
#include <windows.h>

using namespace std;

static void setcolor(WORD color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return;
}

int main() {

    //Uncomment the next four lines to see console color options 0-255
    /*for (int i = 0; i < 255; i++) {
        setcolor(i);
        _cprintf("Color option: %i. Hello, world.\n", i);
    }*/
	
    GameRunner G(5);
    G.runGame();

}

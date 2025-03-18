#include "Mouse.h"
#include "Console.h"

point Mouse::moveMouse()
{
	srand(time(0));
	point retval;
	retval.x = (rand() % 20);
	retval.y = (rand() % 20);
	return retval;
}

void Mouse::draw(point value)
{
	Console::txtPlot(value, 136);
}

#include "Snake.h"

#define key_UP 72
#define key_S 115
#define key_LEFT 75
#define key_W 119
#define key_DOWN 80
#define key_A 97
#define key_RIGHT 77
#define key_D 100

Snake::Snake(int h = 68, int t = 204)
{
	length = 5;
	direction = { 1, 0 };
    head = { 10,10 };
    headcolor = h;
    tailcolor = t;
}

int Snake::GetLength()
{
	return length;
}

void Snake::IncreaseLength()
{
	length++;
}

point Snake::GetDirection()
{
	return direction;
}

void Snake::SetDirection(KeyCommand keypress)
{
    switch (keypress)
    {
    case KeyCommand::Up:
        direction = { 0, -1 };
        break;

    case KeyCommand::Down:
        direction = { 0, 1 };
        break;

    case KeyCommand::Left:
        direction = { -1, 0 };
        break;

    case KeyCommand::Right:
        direction = { 1, 0 };
        break;

    default: 
        break;
    }

}

point Snake::GetHead()
{
    return head;
}

void Snake::move()
{
    head.x += direction.x;
    head.y += direction.y;
    //TailManagement();
}

void Snake::TailManagement()
{
    tail.push_back(head);
    if (tail.size() > length)
        tail.erase(tail.begin());
}

void Snake::DrawSnake()
{
    Console::txtPlot(head, headcolor);
}

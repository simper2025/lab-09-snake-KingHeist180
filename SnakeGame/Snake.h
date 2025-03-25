#pragma once
#include "point.h"
#include "Console.h"
#include "KeyCommand.h"
#include <iostream>
#include <vector>

using namespace std;

class Snake
{
private:
	point head;
	int length;
	vector<point> tail;
	point direction;
	int headcolor;
	int tailcolor;
public:
	Snake(int , int);

	int GetLength();
	void IncreaseLength();

	point GetDirection();
	void SetDirection(KeyCommand);

	point GetHead();

	void move();

	void TailManagement();
	void DrawSnake();
};


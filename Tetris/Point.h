#pragma once
#include<iostream>
#include<Windows.h>

class Point {
private:
	int x;
	int y;
public:
	Point(int x, int y);
	int GetX() const;
	int GetY() const;
	void SetX(int _x);
	void SetY(int _y);
	Point operator+(const Point& p);
	void gotoxy(Point pos);
	void gotoxy(int x, int y);
};
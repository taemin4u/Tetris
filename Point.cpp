#include"Point.h"

Point::Point(int x, int y) : x(x), y(y) {}

int Point::GetX() const { return x; }

int Point::GetY() const  { return y; }

void Point::SetX(int _x) { x = _x; }

void Point::SetY(int _y) { y = _y; }

Point Point::operator+(const Point& p) { return Point(x + p.x, y + y + p.y); }

void Point::gotoxy(int x, int y) {
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

void Point::gotoxy(Point pos) {
	gotoxy(pos.x, pos.y);
}
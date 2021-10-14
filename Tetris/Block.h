#pragma once
// ���� ����Ǵ� �� ����
// board[i][j]�� ���� ������ true, ������ false
#include"Point.h"
#include<iostream>
using namespace std;

class Board {
private:
	bool board[20][10];
public:
	Board();
	bool IsBlock(const Point& pos);
	void Set(Point pos, const bool b);
	int FullLine(); // ��� ���� ���� ������ ������ �ִ��� Ȯ��, ������ ���� ��ȯ & ���� �ִ� �� ������ ����
};
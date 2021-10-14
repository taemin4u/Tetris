#pragma once
// 게임 실행되는 맵 관리
// board[i][j]에 블럭이 있으면 true, 없으면 false
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
	int FullLine(); // 모든 줄을 돌며 가득찬 라인이 있는지 확인, 있으면 점수 반환 & 위에 있는 줄 밑으로 내림
};
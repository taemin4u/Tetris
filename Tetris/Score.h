#pragma once
#include<iostream>
#include"Point.h"
using namespace std;

// ������ ��ŸŸ�� ��ǥ : 28, 9
class Score {
private:
	int score;
	Point score_pos;
public:
	Score();
	void Increment(int inc);
	void Print();
	int GetScore();
};
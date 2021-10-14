#pragma once
#include<iostream>
#include<Windows.h>
using namespace std;

namespace MAIN_STATUS {
	enum {
		GAMESTART = 1,
		GETRANKING,
		EXIT
	};
}

void MainScreen() {
	int status;
	cout << "□□□   □□□   □□□   □□□   □□□   □□□" << endl;
	cout << "  □     □         □     □  □     □     □" << endl;
	cout << "  □     □□□     □     □□□     □     □□□" << endl;
	cout << "  □     □         □     □  □     □         □" << endl;
	cout << "  □     □□□     □     □   □  □□□   □□□" << endl;
	cout << endl << endl << endl;
	cout << "   (1 : 게임시작  2 : 랭킹확인  3 : 종료) 입력 :  ";
	cin >> status;
	cout << endl << endl << endl;
	switch (status)
	{
	case(MAIN_STATUS::GAMESTART):
		cout << "              테트리스 게임을 시작합니다" << endl;
		Sleep(2000);
		system("cls");
		break;
	case(MAIN_STATUS::GETRANKING):
		cout << "         테트리스 게임 랭킹을 가져옵니다" << endl;
		Sleep(2000);
		system("cls");
		break;
	case(MAIN_STATUS::EXIT):
		cout << "              테트리스 게임을 종료합니다" << endl;
		exit(0);
	}
}
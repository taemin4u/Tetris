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
	cout << "����   ����   ����   ����   ����   ����" << endl;
	cout << "  ��     ��         ��     ��  ��     ��     ��" << endl;
	cout << "  ��     ����     ��     ����     ��     ����" << endl;
	cout << "  ��     ��         ��     ��  ��     ��         ��" << endl;
	cout << "  ��     ����     ��     ��   ��  ����   ����" << endl;
	cout << endl << endl << endl;
	cout << "   (1 : ���ӽ���  2 : ��ŷȮ��  3 : ����) �Է� :  ";
	cin >> status;
	cout << endl << endl << endl;
	switch (status)
	{
	case(MAIN_STATUS::GAMESTART):
		cout << "              ��Ʈ���� ������ �����մϴ�" << endl;
		Sleep(2000);
		system("cls");
		break;
	case(MAIN_STATUS::GETRANKING):
		cout << "         ��Ʈ���� ���� ��ŷ�� �����ɴϴ�" << endl;
		Sleep(2000);
		system("cls");
		break;
	case(MAIN_STATUS::EXIT):
		cout << "              ��Ʈ���� ������ �����մϴ�" << endl;
		exit(0);
	}
}
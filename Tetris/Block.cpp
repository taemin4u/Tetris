#include"Block.h"

Board::Board() {
	for (int i = 0; i < 20; i++)
		for (int j = 0; j < 10; j++)
			board [i][j] = false;
}

bool Board::IsBlock(const Point& pos) {
	return board[pos.GetX()][pos.GetY()];
}

void Board::Set(Point pos, const bool b) {
	board[pos.GetX()][pos.GetY()] = b;
}

int Board::FullLine() { 
	int score = 0; int count = 0;
	int garo, int sero;
	for (sero = 0; sero <19; ++sero) { // �ؿ������� �˻��ϸ� ���� ������ �������� sero�� �������� ���������ʰ� �����Ǿ�� �ؼ� ����
		for (garo = 0; garo < 10; ++garo) {
			if (board[sero][garo] == false) break; // �� ���� ���� ������ �ʾ� ���� �� ������ break
		}

		if (garo == 10) { // ���� ���� ��
			// �� �ٵ��� ������ �� ĭ�� ���ܾ���
			for (int line = sero - 1; line >= 0; line--) {
				int k;
				for (k = 0; k < 10; ++k) {
					board[line + 1][k] = board[line][k];
					if (board[line + 1][k] != false) {
						// GotoXY�Լ��� �̿��Ͽ� true�̸� �׷�����
						Point* tmp;
						tmp->gotoxy(line + 1, k);
						cout << "��";
					}
					else {
						Point* tmp;
						tmp->gotoxy(line + 1, k);
						cout << " ";
					}
				}
			}
			for (int i = 0; i < 10; ++i) board[0][i] = false; // ���� �������� ���� �� ���� ������ �� ������
			score = 100;
			count++; // �� ���� ������ ���� ����
		}
	}
	return score * count * count;
}
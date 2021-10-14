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
	for (sero = 0; sero <19; ++sero) { // 밑에서부터 검사하면 만약 라인이 지워지면 sero가 다음으로 증가되지않고 유지되어야 해서 불편
		for (garo = 0; garo < 10; ++garo) {
			if (board[sero][garo] == false) break; // 이 줄이 가득 차있지 않아 지울 수 없으면 break
		}

		if (garo == 10) { // 줄이 가득 참
			// 윗 줄들을 밑으로 한 칸씩 땡겨야함
			for (int line = sero - 1; line >= 0; line--) {
				int k;
				for (k = 0; k < 10; ++k) {
					board[line + 1][k] = board[line][k];
					if (board[line + 1][k] != false) {
						// GotoXY함수를 이용하여 true이면 그려야함
						Point* tmp;
						tmp->gotoxy(line + 1, k);
						cout << "□";
					}
					else {
						Point* tmp;
						tmp->gotoxy(line + 1, k);
						cout << " ";
					}
				}
			}
			for (int i = 0; i < 10; ++i) board[0][i] = false; // 줄이 지워지면 제일 윗 줄은 무조건 다 지워짐
			score = 100;
			count++; // 한 번에 지워진 줄의 개수
		}
	}
	return score * count * count;
}
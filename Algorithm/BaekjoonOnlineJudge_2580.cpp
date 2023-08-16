#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> board(9, vector<int>(9));
bool solved;

void back_tracking(int curCell) {
	if (solved) {
		return;
	}

	if (curCell >= 81) {
		for (auto row : board) {
			for (auto cell : row) {
				cout << cell << ' ';
			}

			cout << '\n';
		}

		solved = true;

		return;
	}

	int x = curCell % 9, y = curCell / 9;

	if (!board[y][x]) {
		for (int i = 1; i <= 9; ++i) {
			bool isSolution = true;
			int ssX = x / 3 * 3, ssY = y / 3 * 3;

			for (int j = 0; j < 9; ++j) {
				if (board[y][j] == i || board[j][x] == i) {
					isSolution = false;

					break;
				}
			}

			if (!isSolution) {
				continue;
			}

			for (int j = ssY; j < ssY + 3; ++j) {
				for (int k = ssX; k < ssX + 3; ++k) {
					if (board[j][k] == i) {
						isSolution = false;

						break;
					}
				}

				if (!isSolution) {
					break;
				}
			}

			if (isSolution) {
				board[y][x] = i;

				back_tracking(curCell + 1);

				board[y][x] = 0;
			}
		}
	}
	else {
		back_tracking(curCell + 1);
	}
}

int main() {
	for (int i = 0; i < board.size(); ++i) {
		for (int j = 0; j < board[i].size(); ++j) {
			cin >> board[i][j];
		}
	}

	back_tracking(0);
}
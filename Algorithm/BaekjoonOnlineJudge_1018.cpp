#include <iostream>

using namespace std;

int main() {
	string board[50], chessboardB[8], chessboardW[8];
	bool isDefault = true;
	int n, m, bCnt, wCnt, min = 32;

	for (int i = 0; i < 8; ++i) {
		for (int j = 0; j < 8; ++j) {
			if (isDefault) {
				chessboardB[i].push_back('B');
				chessboardW[i].push_back('W');
			}
			else {
				chessboardB[i].push_back('W');
				chessboardW[i].push_back('B');
			}

			isDefault = !isDefault;
		}

		isDefault = !isDefault;
	}

	cin >> n >> m;

	for (int i = 0; i < n; ++i) {
		cin >> board[i];
	}

	for (int i = 0; i < n - 7; ++i) {
		for (int j = 0; j < m - 7; ++j) {
			bCnt = wCnt = 0;

			for (int k = 0; k < 8; ++k) {
				for (int l = 0; l < 8; ++l) {
					if (board[i + k][j + l] != chessboardB[k][l]) {
						bCnt++;
					}

					if (board[i + k][j + l] != chessboardW[k][l]) {
						wCnt++;
					}
				}
			}

			if (bCnt < min) {
				min = bCnt;
			}

			if (wCnt < min) {
				min = wCnt;
			}
		}
	}

	cout << min;
}
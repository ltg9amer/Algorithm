#include <iostream>
#include <vector>

using namespace std;

vector<int> board;
int n, caseCnt;

bool can_attacked(int row) {
	for (int newRow = 0; newRow < row; ++newRow) {
		if (board[row] == board[newRow] || abs(board[row] - board[newRow]) == row - newRow) {
			return true;
		}
	}

	return false;
}

void back_tracking(int row) {
	if (row >= n) {
		++caseCnt;

		return;
	}

	for (int col = 0; col < n; ++col) {
		board[row] = col;

		if (!can_attacked(row)) {
			back_tracking(row + 1);
		}
	}
}

int main() {
	cin >> n;

	board.resize(n);
	back_tracking(0);

	cout << caseCnt;
}
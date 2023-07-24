#include <iostream>
#include <vector>

using namespace std;

vector<int> board;
int n, caseCnt;

bool is_attacked(int row) {
	for (int newRow = 0; newRow < row; ++newRow) {
		if (board[row] == board[newRow] || abs(board[row] - board[newRow]) == row - newRow) {
			return true;
		}
	}

	return false;
}

void count_case(int row) {
	if (row >= n) {
		++caseCnt;

		return;
	}

	for (int col = 0; col < n; ++col) {
		board[row] = col;

		if (!is_attacked(row)) {
			count_case(row + 1);
		}
	}
}

int main() {
	cin >> n;

	board.resize(n);

	count_case(0);

	cout << caseCnt;
}
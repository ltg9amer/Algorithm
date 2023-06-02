#include <iostream>
#include <vector>

using namespace std;

bool check_can_attack(int row, vector<int>& board) {

	for (int newRow = 0; newRow < row; ++newRow) {
		if (board[row] == board[newRow] || abs(board[row] - board[newRow]) == row - newRow) {
			return false;
		}
	}

	return true;
}

void count_case(int row, int n, vector<int>& board, int& caseCnt) {
	if (row >= n) {
		++caseCnt;

		return;
	}

	for (int col = 0; col < n; ++col) {
		board[row] = col;

		if (check_can_attack(row, board)) {
			count_case(row + 1, n, board, caseCnt);
		}
	}
}

int main() {
	int n, caseCnt = 0;

	cin >> n;

	vector<int> board(n);

	count_case(0, n, board, caseCnt);

	cout << caseCnt;
}
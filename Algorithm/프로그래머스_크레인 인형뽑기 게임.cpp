#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	stack<int> basket;
	int result = 0;

	for (auto move : moves) {
		int doll = 0;

		for (auto& line : board) {
			if (line[move - 1]) {
				doll = line[move - 1];
				line[move - 1] = 0;

				break;
			}
		}

		if (basket.empty() || (doll != basket.top() && doll)) {
			basket.push(doll);
		}
		else if (doll == basket.top() && doll) {
			basket.pop();

			result += 2;
		}
	}

	return result;
}
#include <iostream>
#include <vector>

using namespace std;

vector<int> globalNumbers;
int globalTarget;
int caseCnt;

void dfs(int index, int sign, int sum) {
	if (index == globalNumbers.size()) {
		if (sum == globalTarget) {
			caseCnt++;
		}

		return;
	}

	sum += globalNumbers[index] * sign;

	dfs(index + 1, 1, sum);
	dfs(index + 1, -1, sum);
}

int solution(vector<int> numbers, int target) {
	globalNumbers = numbers;
	globalTarget = target;

	dfs(0, 1, 0);
	dfs(0, -1, 0);

	return caseCnt / 2;
}
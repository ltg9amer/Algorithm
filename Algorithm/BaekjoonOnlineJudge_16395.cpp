#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	vector<vector<int>> iterationMemo(n + 1);

	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (!j || j == i - 1) {
				iterationMemo[i].push_back(1);
			}
			else {
				iterationMemo[i].push_back(iterationMemo[i - 1][j - 1] + iterationMemo[i - 1][j]);
			}
		}
	}

	cout << iterationMemo[n][k - 1];
}
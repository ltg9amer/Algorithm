#include <iostream>
#include <vector>

using namespace std;

int main() {
	int r, c, w, sum;

	cin >> r >> c >> w;

	vector<vector<int>> iterationMemo(r + w + 1);

	for (int i = 1; i <= r + w; ++i) {
		for (int j = 0; j < i; ++j) {
			if (!j || j == i - 1) {
				iterationMemo[i].push_back(1);
			}
			else {
				iterationMemo[i].push_back(iterationMemo[i - 1][j - 1] + iterationMemo[i - 1][j]);
			}
		}
	}

	sum = iterationMemo[r][c - 1];

	for (int i = c; i < c + w - 1; ++i) {
		sum += iterationMemo[r + w][i];
	}

	cout << sum;
}
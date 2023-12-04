#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> iterationMemo(n + 1, n);

	iterationMemo[1] = 0;

	for (int i = 2; i <= n; ++i) {
		iterationMemo[i] = min(iterationMemo[i], iterationMemo[i - 1] + 1);

		if (!(i % 2)) {
			iterationMemo[i] = min(iterationMemo[i], iterationMemo[i / 2] + 1);
		}

		if (!(i % 3)) {
			iterationMemo[i] = min(iterationMemo[i], iterationMemo[i / 3] + 1);
		}
	}

	cout << iterationMemo[n];
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	vector<int> coins(n);
	vector<int> iterationMemo(k + 1);

	iterationMemo[0] = 1;

	for (auto& coin : coins) {
		cin >> coin;
	}

	for (auto& coin : coins) {
		for (int i = coin; i <= k; ++i) {
			iterationMemo[i] += iterationMemo[i - coin];
		}
	}

	cout << iterationMemo[k];
}
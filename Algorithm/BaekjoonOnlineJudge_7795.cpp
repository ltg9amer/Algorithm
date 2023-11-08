#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, m, pairCount;

	cin >> t;

	while (t--) {
		pairCount = 0;

		cin >> n >> m;

		vector<int> a(n), b(m);

		for (auto& ai : a) {
			cin >> ai;
		}

		for (auto& bi : b) {
			cin >> bi;
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		for (auto& ai : a) {
			pairCount += lower_bound(b.begin(), b.end(), ai) - b.begin();
		}

		cout << pairCount << '\n';
	}
}
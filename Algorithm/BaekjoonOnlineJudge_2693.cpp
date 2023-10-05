#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;

	cin >> t;

	while (t--) {
		vector<int> a(10);

		for (auto& ai : a) {
			cin >> ai;
		}

		sort(a.begin(), a.end());

		cout << a[7] << '\n';
	}
}
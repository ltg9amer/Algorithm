#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, i, j;

	cin >> n >> m;

	vector<int> basket(n);

	for (int i = 0; i < n; ++i) {
		basket[i] = i + 1;
	}

	while (m--) {
		cin >> i >> j;

		swap(basket[i - 1], basket[j - 1]);
	}

	for (auto& item : basket) {
		cout << item << ' ';
	}
}
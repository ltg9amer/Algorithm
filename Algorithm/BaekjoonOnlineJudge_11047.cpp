#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, coinCount = 0;

	cin >> n >> k;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; --i) {
		if (k >= a[i]) {
			coinCount += k / a[i];
			k %= a[i];
		}

		if (!k) {
			break;
		}
	}

	cout << coinCount;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> a;
	int n, k, coinCnt = 0;

	cin >> n >> k;

	a.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; --i) {
		if (k >= a[i]) {
			coinCnt += k / a[i];
			k -= k / a[i] * a[i];
		}

		if (!k) {
			break;
		}
	}

	cout << coinCnt;
}
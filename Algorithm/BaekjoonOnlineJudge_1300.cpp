#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long n, k, low = 1, high, mid, cnt;

	cin >> n >> k;

	high = k;

	while (low <= high) {
		mid = (low + high) / 2;
		cnt = 0;

		for (int i = 1; i <= n; ++i) {
			cnt += min(mid / i, n);
		}

		if (cnt < k) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	cout << low;
}
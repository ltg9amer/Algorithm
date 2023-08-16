#include <iostream>

using namespace std;

int main() {
	int t, h, w, n;

	cin >> t;

	while (t--) {
		cin >> h >> w >> n;

		if (h == 1) {
			cout << 100 + n << '\n';
		}
		else if (!(n % h)) {
			cout << h * 100 + ((n - 1) / h + 1) << '\n';
		}
		else {
			cout << n % h * 100 + (n / h + 1) << '\n';
		}
	}
}
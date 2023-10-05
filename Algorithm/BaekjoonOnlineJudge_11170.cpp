#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int t, n, m, num;

	cin >> t;

	while (t--) {
		int zeroCnt = 0;

		cin >> n >> m;

		for (int i = n; i <= m; n = ++i) {
			if (!n) {
				zeroCnt++;
			}

			while (n) {
				if (!(n % 10)) {
					zeroCnt++;
				}

				n /= 10;
			}
		}

		cout << zeroCnt << '\n';
	}
}
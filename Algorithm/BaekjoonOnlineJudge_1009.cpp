#include <iostream>

using namespace std;

int main() {
	int t, a, b;

	cin >> t;

	while (t--) {
		int result = 1;

		cin >> a >> b;

		while (b--) {
			(result *= a) %= 10;
		}

		result += (result ? 0 : 10);

		cout << result << '\n';
	}
}
#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, num, cnt = 0;

	cin >> n;

	while (true) {
		num = n - 3 * cnt;

		if (!(num % 5)) {
			cnt = cnt + num / 5;

			break;
		}
		else if (num < 0) {
			cnt = -1;

			break;
		}
		else {
			cnt++;
		}
	}

	cout << cnt;
}
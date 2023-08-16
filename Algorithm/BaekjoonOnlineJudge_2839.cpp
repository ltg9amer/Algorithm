#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, word, cnt = 0;

	cin >> n;

	while (true) {
		word = n - 3 * cnt;

		if (!(word % 5)) {
			cnt = cnt + word / 5;

			break;
		}
		else if (word < 0) {
			cnt = -1;

			break;
		}
		else {
			cnt++;
		}
	}

	cout << cnt;
}
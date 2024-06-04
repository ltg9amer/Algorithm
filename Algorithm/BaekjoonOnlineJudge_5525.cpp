#include <iostream>

using namespace std;

int main() {
	string s;
	int n, m, countN = 0, countPn = 0;

	cin >> n >> m >> s;

	for (int i = 0; i < m - 2; ++i) {
		if (s[i] == 'I') {
			if (s[i] != s[i + 1] && s[i] == s[i + 2]) {
				countN++;
			}
			else {
				if (countN >= n) {
					countPn += countN - n + 1;
				}

				countN = 0;
			}
		}
	}

	if (countN && countN >= n) {
		countPn += countN - n + 1;
		countN = 0;
	}

	cout << countPn;
}
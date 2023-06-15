#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	string input;
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		unordered_map<char, bool> useWords;

		cin >> input;

		useWords[input[0]] = true;

		for (int j = 1; j < input.size(); ++j) {
			if (input[j] != input[j - 1]) {
				if (!useWords[input[j]]) {
					useWords[input[j]] = true;
				}
				else {
					cnt++;

					break;
				}
			}
		}
	}

	cout << n - cnt;
}
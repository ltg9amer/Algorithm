#include <iostream>
#include <vector>

using namespace std;

int main() {
	string fileName, pattern;
	int n;

	cin >> n >> pattern;

	for (int i = 0; i < n - 1; ++i) {
		cin >> fileName;

		for (int j = 0; j < pattern.size(); ++j) {
			if (pattern[j] != fileName[j]) {
				pattern[j] = '?';
			}
		}
	}

	cout << pattern;
}
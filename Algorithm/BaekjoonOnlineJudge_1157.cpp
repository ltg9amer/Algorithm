#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> alphabet(26);
	string input;
	int max = 0, maxIndex = 0, count = 0;

	cin >> input;

	for (auto item : input) {
		alphabet[toupper(item) - 'A']++;
	}

	for (int i = 0; i < alphabet.size(); ++i) {
		if (alphabet[i] > max) {
			max = alphabet[i];
			maxIndex = i;
			count = 0;
		}
		else if (alphabet[i] == max) {
			count++;
		}
	}

	cout << (count != 0 ? '?' : (char)('A' + maxIndex));
}
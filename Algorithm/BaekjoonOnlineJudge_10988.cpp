#include <iostream>

using namespace std;

string word;

bool is_palindrome() {
	for (int i = 0; i < word.size() / 2; i++) {
		if (word[i] != word[word.size() - i - 1]) {
			return false;
		}
	}

	return true;
}

int main() {
	cin >> word;
	cout << is_palindrome();
}
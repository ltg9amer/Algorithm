#include <cmath>
#include <iostream>

using namespace std;

int main() {
	string word;
	int l;
	long long squared, hash = 0;

	cin >> l >> word;

	for (int i = 0; i < l; ++i) {
		squared = 1;

		for (int j = 0; j < i; ++j) {
			squared *= 31;
			squared %= 1234567891;
		}

		hash += (word[i] - '`') * squared;
		hash %= 1234567891;

	}

	cout << hash;
}
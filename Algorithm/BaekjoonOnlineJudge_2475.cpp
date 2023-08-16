#include <iostream>

using namespace std;

int main() {
	int word, valNum = 0;

	for (int i = 0; i < 5; ++i) {
		cin >> word;

		valNum += word * word;
	}

	cout << valNum % 10;
}
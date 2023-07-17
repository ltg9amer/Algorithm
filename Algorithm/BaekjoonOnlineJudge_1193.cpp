#include <iostream>

using namespace std;

int main() {
	int x, line = 0, adder = 0, index = 1;

	cin >> x;

	while (line < x) {
		adder++;
		line += adder;
	}

	if (x != 1) {
		line -= adder - 1;
	}

	while (line < x) {
		index++;
		line++;
	}

	if (adder % 2) {
		cout << adder - index + 1 << '/' << index;
	}
	else {
		cout << index << '/' << adder - index + 1;
	}
}
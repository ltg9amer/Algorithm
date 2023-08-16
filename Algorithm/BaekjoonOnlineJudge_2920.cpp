#include <iostream>

using namespace std;

int main() {
	bool isAsc = true, isDesc = true;
	int scale;

	for (int i = 1; i <= 8; ++i) {
		cin >> scale;

		if (scale == i) {
			isDesc = false;
		}
		else if (scale == 9 - i) {
			isAsc = false;
		}
		else {
			isAsc = false;
			isDesc = false;

			break;
		}
	}

	if (isAsc) {
		cout << "ascending";
	}
	else if (isDesc) {
		cout << "descending";
	}
	else {
		cout << "mixed";
	}
}
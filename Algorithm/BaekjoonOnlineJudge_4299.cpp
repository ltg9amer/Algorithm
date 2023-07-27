#include <iostream>

using namespace std;

int main() {
	int sum, sub, win, lose;

	cin >> sum >> sub;

	win = (sum + sub) / 2;
	lose = (sum - sub) / 2;

	if (lose >= 0 && win + lose == sum && win - lose == sub) {
		cout << win << ' ' << lose;
	}
	else {
		cout << -1;
	}
}
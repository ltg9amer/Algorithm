#include <iostream>

using namespace std;

int main() {
	int t, c, quarter, dime, nickel, penny;

	cin >> t;

	for (int i = 0; i < t; ++i) {
		cin >> c;

		quarter = dime = nickel = penny = 0;

		while (c != 0) {
			if (c >= 25) {
				c -= 25;
				quarter++;
			}
			else if (c >= 10) {
				c -= 10;
				dime++;
			}
			else if (c >= 5) {
				c -= 5;
				nickel++;
			}
			else {
				c--;
				penny++;
			}
		}

		cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << '\n';
	}
}
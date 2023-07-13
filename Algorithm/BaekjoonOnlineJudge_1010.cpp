#include <iostream>

using namespace std;

double factorial(int coeff) {
	if (coeff < 2) {
		return 1;
	}

	return coeff * factorial(coeff - 1);
}

int main() {
	int t, n, m;

	cin >> t;

	cout.precision(0);

	for (int i = 0; i < t; ++i) {
		cin >> n >> m;
		cout << fixed << factorial(m) / (factorial(n) * factorial(m - n)) << '\n';
	}
}
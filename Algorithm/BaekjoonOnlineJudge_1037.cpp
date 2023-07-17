#include <iostream>

using namespace std;

int main() {
	int amount, divisor, maxDivisor = 2, minDivisor = 1000000;

	cin >> amount;

	while (amount--) {
		cin >> divisor;

		maxDivisor = max(maxDivisor, divisor);
		minDivisor = min(minDivisor, divisor);
	}

	cout << maxDivisor * minDivisor;
}
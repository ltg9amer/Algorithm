#include <iostream>

using namespace std;

int main() {
	int n, f;

	cin >> n >> f;

	n /= 100;
	n *= 100;

	while (n % f) {
		n++;
	}

	cout << (n % 100 < 10 ? "0" : "") << n % 100;
}
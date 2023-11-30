#include <iostream>
#include <vector>

using namespace std;

vector<long> recursiveMemo;

long fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	return recursiveMemo[n] ? recursiveMemo[n] : recursiveMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;

	cin >> n;

	recursiveMemo.resize(n + 1);

	cout << fibonacci(n);
}
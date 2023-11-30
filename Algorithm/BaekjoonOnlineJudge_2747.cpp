#include <iostream>
#include <vector>

using namespace std;

vector<int> recursiveMemo;

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	if (recursiveMemo[n]) {
		return recursiveMemo[n];
	}
	else {
		return recursiveMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;

	cin >> n;

	recursiveMemo.resize(n + 1);

	cout << fibonacci(n);
}
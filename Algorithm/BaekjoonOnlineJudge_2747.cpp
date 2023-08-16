#include <iostream>
#include <vector>

using namespace std;

vector<int> memo;

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	if (memo[n]) {
		return memo[n];
	}
	else {
		return memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
	}
}

int main() {
	int n;

	cin >> n;

	memo.resize(n + 1);

	cout << fibonacci(n);
}
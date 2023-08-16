#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(41);

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
	int n, t;

	cin >> t;

	while (t--) {
		cin >> n;

		if (n) {
			cout << fibonacci(n - 1) << ' ' << fibonacci(n) << '\n';
		}
		else {
			cout << "1 0\n";
		}
	}
}
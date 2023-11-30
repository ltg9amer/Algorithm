#include <iostream>
#include <vector>

using namespace std;

vector<int> recursiveMemo(41);

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}

	return recursiveMemo[n] ? recursiveMemo[n] : recursiveMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
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
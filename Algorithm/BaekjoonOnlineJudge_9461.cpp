#include <iostream>
#include <vector>

using namespace std;

vector<long> recursiveMemo(100);

long padovan(int n) {
	if (n <= 3) {
		return 1;
	}

	return recursiveMemo[n] ? recursiveMemo[n] : recursiveMemo[n] = padovan(n - 2) + padovan(n - 3);
}

int main() {
	int t, n;

	cin >> t;

	while (t--) {
		cin >> n;
		cout << padovan(n) << '\n';
	}
}
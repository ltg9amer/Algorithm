#include <iostream>

using namespace std;

long long euclidean(long long a, long long b) {
	return b ? euclidean(b, a % b) : a;
}

int main() {
	int n, sum = 0, cd, gcd = 0, lastTree = 0, curTree = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> curTree;

		if (lastTree) {
			sum += curTree - lastTree;

			if (!gcd) {
				gcd = curTree - lastTree;
			}

			cd = euclidean(gcd, curTree - lastTree);
			gcd = min(gcd, cd);
		}

		lastTree = curTree;
	}

	cout << (sum - (n - 1) * gcd) / gcd;
}
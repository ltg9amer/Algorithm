#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> p(n + 1), maxP(n + 1);

	for (int i = 1; i <= n; ++i) {
		cin >> p[i];
	}

	maxP[1] = p[1];

	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			maxP[i] = max(maxP[i], maxP[i - j] + p[j]);
		}
	}

	cout << maxP[n];
}
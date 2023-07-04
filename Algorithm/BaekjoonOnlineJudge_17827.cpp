#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, v, k;

	cin >> n >> m >> v;

	v--;

	vector<int> snail(n);

	for (int i = 0; i < n; ++i) {
		cin >> snail[i];
	}

	while (m--) {
		cin >> k;

		if (k < n) {
			cout << snail[k] << '\n';
		}
		else {
			cout << snail[v + (k - v) % (n - v)] << '\n';
		}
	}
}
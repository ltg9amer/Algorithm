#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, a, b, c;

	cin >> n >> m;

	vector<vector<int>> costs(n + 1, vector<int>(n + 1, n * 100000 + 1));

	for (int i = 1; i <= n; ++i) {
		costs[i][i] = 0;
	}

	while (m--) {
		cin >> a >> b >> c;

		costs[a][b] = min(costs[a][b], c);
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k) {
				costs[j][k] = min(costs[j][k], costs[j][i] + costs[i][k]);
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cout << (costs[i][j] == n * 100000 + 1 ? 0 : costs[i][j]) << ' ';
		}

		cout << '\n';
	}
}
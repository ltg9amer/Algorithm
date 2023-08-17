#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<int>> apt;
	int t, k, n;

	cin >> t;

	while (t--) {
		cin >> k >> n;

		while (apt.size() < k + 1) {
			apt.push_back(vector<int>(n));
		}

		if (n > apt.front().size()) {
			for (int i = 0; i < apt.size(); ++i) {
				apt[i].resize(n);
			}
		}

		for (int i = 0; i < k + 1; ++i) {
			for (int j = 0; j < n; ++j) {
				if (!apt[i][j]) {
					if (!i) {
						apt[i][j] = j + 1;
					}
					else if (!j) {
						apt[i][j] = apt[i - 1][j];
					}
					else {
						apt[i][j] = apt[i][j - 1] + apt[i - 1][j];
					}
				}
			}
		}

		cout << apt[k][n - 1] << '\n';
	}
}
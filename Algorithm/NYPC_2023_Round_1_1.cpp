#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, maxMosquitoCnt = 0;

	cin >> n >> m;

	vector<vector<int>> mosquitos(n, vector<int>(n));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> mosquitos[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			int sMosquitoCnt = 0, dMosquitoCnt = 0;

			for (int k = -m; k <= m; ++k) {
				if (i + k >= 0 && i + k < n) {
					sMosquitoCnt += mosquitos[i + k][j];

					if (j + k >= 0 && j + k < n) {
						dMosquitoCnt += mosquitos[i + k][j + k];
					}

					if (j - k >= 0 && j - k < n && k) {
						dMosquitoCnt += mosquitos[i + k][j - k];
					}
				}

				if (j + k >= 0 && j + k < n && k) {
					sMosquitoCnt += mosquitos[i][j + k];
				}
			}

			maxMosquitoCnt = max(maxMosquitoCnt, max(sMosquitoCnt, dMosquitoCnt));
		}
	}

	cout << maxMosquitoCnt;
}
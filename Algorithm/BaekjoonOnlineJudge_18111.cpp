#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, b, minReqTime = INT_MAX, groundHeight;

	cin >> n >> m >> b;

	vector<vector<int>> ground(n, vector<int>(m));

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> ground[i][j];
		}
	}

	for (int i = 0; i <= 256; ++i) {
		int miningBlock = 0, usingBlock = 0, reqTime = 0;

		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < m; ++k) {
				int modBlock = i - ground[j][k];

				if (modBlock < 0) {
					miningBlock -= modBlock;
					reqTime -= modBlock * 2;
				}
				else if (modBlock > 0) {
					usingBlock += modBlock;
					reqTime += modBlock;
				}
			}
		}

		if (b + miningBlock >= usingBlock) {
			if (reqTime <= minReqTime) {
				minReqTime = reqTime;
				groundHeight = i;
			}
		}
	}

	cout << minReqTime << ' ' << groundHeight;
}
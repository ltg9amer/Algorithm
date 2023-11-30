#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long n, m, minCutHeight = 1, maxCutHeight = 0, cutHeight, cuttedWood;

	cin >> n >> m;

	vector<int> treeHeights(n);

	for (auto& treeHeight : treeHeights) {
		cin >> treeHeight;

		maxCutHeight = max(maxCutHeight, (long)treeHeight);
	}

	while (minCutHeight <= maxCutHeight) {
		cutHeight = (minCutHeight + maxCutHeight) * 0.5;
		cuttedWood = 0;

		for (auto& treeHeight : treeHeights) {
			if (treeHeight > cutHeight) {
				cuttedWood += treeHeight - cutHeight;
			}

			if (cuttedWood >= m) {
				break;
			}
		}

		cuttedWood >= m ? minCutHeight = cutHeight + 1 : maxCutHeight = cutHeight - 1;
	}

	cout << maxCutHeight;
}
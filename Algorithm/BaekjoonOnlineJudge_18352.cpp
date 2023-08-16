#include <climits>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minRoad;
	bool solved = false;
	int n, m, k, x, a, b, curCity, curCityDist, nextCity, nextCityDist;

	cin >> n >> m >> k >> x;

	vector<vector<int>> roads(n + 1);
	vector<int> minDists(n + 1, INT_MAX);

	while (m--) {
		cin >> a >> b;

		roads[a].push_back(b);
	}

	minRoad.push({ x, 0 });

	minDists[x] = 0;

	while (!minRoad.empty()) {
		curCity = minRoad.top().first;
		curCityDist = minRoad.top().second;

		minRoad.pop();

		for (auto road : roads[curCity]) {
			nextCity = road;
			nextCityDist = curCityDist + 1;

			if (nextCityDist < minDists[nextCity]) {
				minDists[nextCity] = nextCityDist;

				minRoad.push({ nextCity, nextCityDist });
			}
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (minDists[i] == k) {
			solved = true;

			cout << i << '\n';
		}
	}

	if (!solved) {
		cout << -1;
	}
}
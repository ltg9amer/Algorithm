#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	vector<int> kCities;
	queue<int> minRoads;
	int n, m, k, x, a, b, curCity, nextCity;

	cin >> n >> m >> k >> x;

	vector<vector<int>> roads(n + 1);
	vector<int> minDists(n + 1, -1);

	while (m--) {
		cin >> a >> b;

		roads[a].push_back(b);
	}

	minRoads.push(x);

	minDists[x] = 0;

	while (!minRoads.empty()) {
		curCity = minRoads.front();

		minRoads.pop();

		for (auto road : roads[curCity]) {
			nextCity = road;

			if (minDists[nextCity] == -1) {
				minRoads.push(nextCity);

				minDists[nextCity] = minDists[curCity] + 1;

				if (minDists[nextCity] == k) {
					kCities.push_back(nextCity);
				}
			}
		}
	}

	sort(kCities.begin(), kCities.end());

	if (kCities.empty()) {
		cout << -1;
	}
	else {
		for (auto kCity : kCities) {
			cout << kCity << '\n';
		}
	}
}
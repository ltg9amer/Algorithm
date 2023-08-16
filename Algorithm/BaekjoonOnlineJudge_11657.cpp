#include <climits>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, m, a, b, c, nextCity, nextCityTime;

	cin >> n >> m;

	vector<vector<pair<int, int>>> routeMap(n + 1);
	vector<long long> minTimes(n + 1, LLONG_MAX);

	while (m--) {
		cin >> a >> b >> c;

		routeMap[a].push_back({ b, c });
	}

	minTimes[1] = 0;

	for (int i = 0; i < n; ++i) {
		for (int j = 1; j <= n; ++j) {
			for (int k = 0; k < routeMap[j].size(); ++k) {
				nextCity = routeMap[j][k].first;
				nextCityTime = routeMap[j][k].second;

				if (minTimes[j] != LLONG_MAX && minTimes[j] + nextCityTime < minTimes[nextCity]) {
					minTimes[nextCity] = minTimes[j] + nextCityTime;

					if (i == n - 1) {
						cout << -1;

						return 0;
					}
				}
			}
		}
	}

	for (int i = 2; i <= n; ++i) {
		cout << (minTimes[i] == LLONG_MAX ? -1 : minTimes[i]) << '\n';
	}
}
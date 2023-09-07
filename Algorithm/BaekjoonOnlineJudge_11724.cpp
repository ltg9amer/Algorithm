#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<bool> distances;

void back_tracking(int cur) {
	distances[cur] = true;

	for (int i = 0; i < graph[cur].size(); ++i) {
		int next = graph[cur][i];

		if (!distances[next]) {
			back_tracking(next);
		}
	}
}

int main() {
	int n, m, u, v, ccCnt = 0;

	cin >> n >> m;

	graph.resize(n + 1);
	distances.resize(n + 1);

	for (int i = 0; i < m; ++i) {
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i) {
		if (!distances[i]) {
			ccCnt++;
			back_tracking(i);
		}
	}

	cout << ccCnt;
}
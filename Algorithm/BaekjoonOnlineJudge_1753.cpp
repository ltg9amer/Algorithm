#include <climits>
#include <iostream>
#include <queue>

using namespace std;

int main() {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> weights;
	int vertex, e, k, u, v, w, curNode, curNodeWeight, nextNode, nextNodeWeight;

	cin >> vertex >> e >> k;

	vector<vector<pair<int, int>>> graph(vertex + 1);
	vector<int> minWeights(vertex + 1, INT_MAX);

	while (e--) {
		cin >> u >> v >> w;

		graph[u].push_back({ v, w });
	}

	weights.push({ 0, k });

	minWeights[k] = 0;

	while (!weights.empty()) {
		curNodeWeight = weights.top().first;
		curNode = weights.top().second;

		weights.pop();

		for (auto edge : graph[curNode]) {
			nextNode = edge.first;
			nextNodeWeight = curNodeWeight + edge.second;

			if (nextNodeWeight < minWeights[nextNode]) {
				minWeights[nextNode] = nextNodeWeight;

				weights.push({ nextNodeWeight, nextNode });
			}
		}
	}

	for (int i = 1; i <= vertex; ++i) {
		if (minWeights[i] == INT_MAX) {
			cout << "INF\n";
		}
		else {
			cout << minWeights[i] << '\n';
		}
	}
}
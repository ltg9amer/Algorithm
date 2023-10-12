#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> graph;
vector<int> parent;
int n, firstNode, secondNode;

void back_tracking(int curNode) {
	for (const auto& edge : graph[curNode]) {
		if (!parent[edge]) {
			parent[edge] = curNode;

			back_tracking(edge);
		}
	}
}

int main() {
	cin >> n;

	graph.resize(n + 1);
	parent.resize(n + 1);

	for (int i = 0; i < n - 1; ++i) {
		cin >> firstNode >> secondNode;

		graph[firstNode].push_back(secondNode);
		graph[secondNode].push_back(firstNode);
	}

	back_tracking(1);

	for (int i = 2; i <= n; ++i) {
		cout << parent[i] << '\n';
	}
}
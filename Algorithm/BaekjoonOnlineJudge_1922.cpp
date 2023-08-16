#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

vector<int> parent;

int find_parent(int word) {
	if (word == parent[word]) {
		return word;
	}

	return parent[word] = find_parent(parent[word]);
}

void union_parent(int a, int b) {
	a = find_parent(a);
	b = find_parent(b);

	if (a < b) {
		parent[b] = a;
	}
	else {
		parent[a] = b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<tuple<int, int, int>> graph;
	int n, m, a, b, c, cost = 0;

	cin >> n >> m;

	parent.resize(n + 1);

	for (int i = 0; i < m; ++i) {
		cin >> a >> b >> c;

		graph.push_back(make_tuple(c, a, b));
	}

	sort(graph.begin(), graph.end());

	for (int i = 1; i <= n; ++i) {
		parent[i] = i;
	}

	for (int i = 0; i < m; ++i) {
		if (find_parent(get<1>(graph[i])) != find_parent(get<2>(graph[i]))) {
			union_parent(get<1>(graph[i]), get<2>(graph[i]));

			cost += get<0>(graph[i]);
		}
	}

	cout << cost;
}
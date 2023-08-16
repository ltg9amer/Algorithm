#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	queue<int> line;
	int n, m, a, b, curStud, nextStud;

	cin >> n >> m;

	vector<queue<int>> graph(n + 1);
	vector<int> inDegree(n + 1);

	while (m--) {
		cin >> a >> b;

		graph[a].push(b);
		inDegree[b]++;
	}

	for (int i = 1; i <= n; ++i) {
		if (!inDegree[i]) {
			line.push(i);
		}
	}

	while (!line.empty()) {
		curStud = line.front();

		line.pop();

		cout << curStud << ' ';

		while (!graph[curStud].empty()) {
			nextStud = graph[curStud].front();

			graph[curStud].pop();

			if (!--inDegree[nextStud]) {
				line.push(nextStud);
			}
		}
	}
}
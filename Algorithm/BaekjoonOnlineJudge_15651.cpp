#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
vector<int> seq;
int n, m;

void dfs(int cur) {
	if (cur == m) {
		for (int i = 0; i < m; ++i) {
			cout << seq[i] << ' ';
		}

		cout << '\n';
	}
	else {
		for (int i = 0; i < n; ++i) {
			visited[i] = true;
			seq[cur] = i + 1;

			dfs(cur + 1);

			visited[i] = false;
		}
	}
}

int main() {
	cin >> n >> m;

	visited.resize(n);
	seq.resize(n);
	dfs(0);
}
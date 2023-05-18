#include <iostream>
#include <vector>

using namespace std;

void dfs(const int& cur, const int& n, const int& m, vector<bool>& vstd, vector<int>& seq) {
	if (cur == m) {
		for (int i = 0; i < m; ++i) {
			cout << seq[i] << ' ';
		}

		cout << '\n';
	}
	else {
		for (int i = 0; i < n; ++i) {
			if (!vstd[i]) {
				vstd[i] = true;
				seq[cur] = i + 1;

				dfs(cur + 1, n, m, vstd, seq);

				vstd[i] = false;
			}
		}
	}
}

int main() {
	int n, m;

	cin >> n >> m;

	vector<bool> vstd(n);
	vector<int> seq(n);

	dfs(0, n, m, vstd, seq);
}
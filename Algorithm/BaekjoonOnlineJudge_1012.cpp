#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> visited(2601);
vector<vector<int>> grounds(2601);
int t, m, n, k, x, y, adjCnt;

void dfs(int curGroundX, int curGroundY) {
	visited[curGroundY][curGroundX] = true;

	if (curGroundX - 1 >= 0 && grounds[curGroundY][curGroundX - 1] && !visited[curGroundY][curGroundX - 1]) {
		dfs(curGroundX - 1, curGroundY);
	}

	if (curGroundY - 1 >= 0 && grounds[curGroundY - 1][curGroundX] && !visited[curGroundY - 1][curGroundX]) {
		dfs(curGroundX, curGroundY - 1);
	}

	if (curGroundX + 1 < m && grounds[curGroundY][curGroundX + 1] && !visited[curGroundY][curGroundX + 1]) {
		dfs(curGroundX + 1, curGroundY);
	}

	if (curGroundY + 1 < n && grounds[curGroundY + 1][curGroundX] && !visited[curGroundY + 1][curGroundX]) {
		dfs(curGroundX, curGroundY + 1);
	}
}

int main() {
	cin >> t;

	while (t--) {
		cin >> m >> n >> k;

		fill(visited.begin(), visited.end(), vector<bool>(m));
		fill(grounds.begin(), grounds.end(), vector<int>(m));

		adjCnt = 0;

		for (int i = 0; i < k; ++i) {
			cin >> x >> y;

			grounds[y][x] = 1;
		}

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (grounds[i][j] && !visited[i][j]) {
					dfs(j, i);

					adjCnt++;
				}
			}
		}

		cout << adjCnt << '\n';
	}
}
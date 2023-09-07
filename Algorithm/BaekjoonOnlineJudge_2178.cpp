#include <climits>
#include <iostream>
#include <queue>

using namespace std;

vector<vector<int>> distances;
vector<string> maze;
queue<pair<int, int>> visitCells;
int n, m;

void bfs() {
	distances.front().front() = 1;

	visitCells.push({ 0, 0 });

	while (!visitCells.empty()) {
		int nextCellX = visitCells.front().second, nextCellY = visitCells.front().first;

		visitCells.pop();

		if (nextCellX) {
			if (maze[nextCellY][nextCellX - 1] == '1' && distances[nextCellY][nextCellX] + 1 < distances[nextCellY][nextCellX - 1]) {
				distances[nextCellY][nextCellX - 1] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY, nextCellX - 1 });
			}
		}

		if (nextCellY) {
			if (maze[nextCellY - 1][nextCellX] == '1' && distances[nextCellY][nextCellX] + 1 < distances[nextCellY - 1][nextCellX]) {
				distances[nextCellY - 1][nextCellX] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY - 1, nextCellX });
			}
		}

		if (nextCellX < m - 1) {
			if (maze[nextCellY][nextCellX + 1] == '1' && distances[nextCellY][nextCellX] + 1 < distances[nextCellY][nextCellX + 1]) {
				distances[nextCellY][nextCellX + 1] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY, nextCellX + 1 });
			}
		}

		if (nextCellY < n - 1) {
			if (maze[nextCellY + 1][nextCellX] == '1' && distances[nextCellY][nextCellX] + 1 < distances[nextCellY + 1][nextCellX]) {
				distances[nextCellY + 1][nextCellX] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY + 1, nextCellX });
			}
		}
	}
}

int main() {
	cin >> n >> m;

	distances.resize(n, vector<int>(m, INT_MAX));
	maze.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> maze[i];
	}

	bfs();

	cout << distances.back().back();
}
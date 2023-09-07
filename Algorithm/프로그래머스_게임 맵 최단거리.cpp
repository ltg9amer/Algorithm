#include <climits>
#include <queue>

using namespace std;

vector<vector<int>> distances;
queue<pair<int, int>> visitCells;

void bfs(vector<vector<int>>& maps) {
	distances.front().front() = 1;

	visitCells.push({ 0, 0 });

	while (!visitCells.empty()) {
		int nextCellX = visitCells.front().second, nextCellY = visitCells.front().first;

		visitCells.pop();

		if (nextCellX) {
			if (maps[nextCellY][nextCellX - 1] && distances[nextCellY][nextCellX] + 1 < distances[nextCellY][nextCellX - 1]) {
				distances[nextCellY][nextCellX - 1] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY, nextCellX - 1 });
			}
		}

		if (nextCellY) {
			if (maps[nextCellY - 1][nextCellX] && distances[nextCellY][nextCellX] + 1 < distances[nextCellY - 1][nextCellX]) {
				distances[nextCellY - 1][nextCellX] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY - 1, nextCellX });
			}
		}

		if (nextCellX < maps.front().size() - 1) {
			if (maps[nextCellY][nextCellX + 1] && distances[nextCellY][nextCellX] + 1 < distances[nextCellY][nextCellX + 1]) {
				distances[nextCellY][nextCellX + 1] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY, nextCellX + 1 });
			}
		}

		if (nextCellY < maps.size() - 1) {
			if (maps[nextCellY + 1][nextCellX] && distances[nextCellY][nextCellX] + 1 < distances[nextCellY + 1][nextCellX]) {
				distances[nextCellY + 1][nextCellX] = distances[nextCellY][nextCellX] + 1;

				visitCells.push({ nextCellY + 1, nextCellX });
			}
		}
	}
}

int solution(vector<vector<int>> maps) {
	distances.resize(maps.size(), vector<int>(maps.front().size(), INT_MAX));
	bfs(maps);

	return distances.back().back() != INT_MAX ? distances.back().back() : -1;
}
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> globalComputers;
vector<bool> visited;
int globalN, networkCnt;

void dfs(int curCom) {
	visited[curCom] = true;

	for (int i = 0; i < globalN; ++i) {
		if (globalComputers[curCom][i] && !visited[i]) {
			dfs(i);
		}
	}
}

int solution(int n, vector<vector<int>> computers) {
	globalComputers = computers;
	globalN = n;

	visited.resize(n);

	for (int i = 0; i < n; ++i) {
		if (!visited[i]) {
			dfs(i);

			networkCnt++;
		}
	}

	return networkCnt;
}
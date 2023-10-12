#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> globalComputers;
vector<bool> parent;
int globalN, networkCnt;

void dfs(int curCom) {
	parent[curCom] = true;

	for (int i = 0; i < globalN; ++i) {
		if (globalComputers[curCom][i] && !parent[i]) {
			dfs(i);
		}
	}
}

int solution(int n, vector<vector<int>> computers) {
	globalComputers = computers;
	globalN = n;

	parent.resize(n);

	for (int i = 0; i < n; ++i) {
		if (!parent[i]) {
			dfs(i);

			networkCnt++;
		}
	}

	return networkCnt;
}
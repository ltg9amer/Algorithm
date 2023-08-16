#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> orgChart;

int back_tracking(int curEmp) {
	vector<int> reqTimes;
	int underCnt = orgChart[curEmp].size(), minReqTime = 0;

	for (int under : orgChart[curEmp]) {
		reqTimes.push_back(back_tracking(under));
	}

	sort(reqTimes.begin(), reqTimes.end());

	for (int i = 0; i < reqTimes.size(); ++i) {
		minReqTime = max(minReqTime, reqTimes[i] + underCnt--);
	}

	return minReqTime;
}

int main() {
	int n, boss;

	cin >> n;

	orgChart.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> boss;

		if (boss == -1) {
			continue;
		}

		orgChart[boss].push_back(i);
	}

	cout << back_tracking(0);
}
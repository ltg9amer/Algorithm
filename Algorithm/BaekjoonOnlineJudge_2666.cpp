#include <iostream>
#include <vector>

using namespace std;

vector<int> useCloset(20);
int n, fBlank, sBlank, useAmount, minCnt = 10000;

void closet(int fBlank, int sBlank, int nowUse, int cnt) {
	if (nowUse == useAmount) {
		minCnt = min(minCnt, cnt);

		return;
	}

	closet(useCloset[nowUse], sBlank, nowUse + 1, cnt + abs(useCloset[nowUse] - fBlank));
	closet(fBlank, useCloset[nowUse], nowUse + 1, cnt + abs(useCloset[nowUse] - sBlank));
}

int main() {
	int nowUse;

	cin >> n >> fBlank >> sBlank >> useAmount;

	for (int i = 0; i < useAmount; ++i) {
		cin >> useCloset[i];
	}

	closet(fBlank, sBlank, 0, 0);

	cout << minCnt;
}
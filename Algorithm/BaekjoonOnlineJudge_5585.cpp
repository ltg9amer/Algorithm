#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> coins = { 500, 100, 50, 10, 5, 1 };
	int paidMoney, change = 1000, coinCnt = 0;

	cin >> paidMoney;

	change -= paidMoney;

	while (change) {
		for (int i = 0; i < coins.size(); ++i) {
			if (change >= coins[i]) {
				change -= coins[i];
				coinCnt++;

				break;
			}
		}
	}

	cout << coinCnt;
}
#include <iostream>

using namespace std;

int main() {
	int n, fiveCnt = 0;

	cin >> n;

	for (int i = 5; i <= n; i *= 5) {
		fiveCnt += n / i;
	}

	cout << fiveCnt;
}
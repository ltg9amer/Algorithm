#include <iostream>

using namespace std;

int main() {
	int x, stickLen = 64, stickCnt = 0;

	cin >> x;

	while (x) {
		if (stickLen <= x) {
			x -= stickLen;
			stickCnt++;
		}
		else {
			stickLen >>= 1;
		}
	}

	cout << stickCnt;
}
#include <iostream>

using namespace std;

int main() {
	string boardState;
	int pieceCnt = 0;

	for (int i = 0; i < 8; ++i) {
		cin >> boardState;

		for (int j = 0; j < 8; ++j) {
			if ((i % 2 && j % 2) || (!(i % 2) && !(j % 2))) {
				if (boardState[j] == 'F') {
					pieceCnt++;
				}
			}
		}
	}

	cout << pieceCnt;
}
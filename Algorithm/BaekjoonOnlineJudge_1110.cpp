#include <iostream>

using namespace std;

int main() {
	int n, newNum, cycleLen = 0;

	cin >> n;

	newNum = n;

	do {
		newNum = newNum * 10 % 100 + (newNum / 10 + newNum % 10) % 10;
		cycleLen++;
	} while (n != newNum);

	cout << cycleLen;
}
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numCnts(10);
	int a, b, c, result;

	cin >> a >> b >> c;

	result = a * b * c;

	while (result) {
		numCnts[result % 10]++;
		result /= 10;
	}

	for (auto numCnt : numCnts) {
		cout << numCnt << '\n';
	}
}
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> sides(3);

	while (true) {
		for (int i = 0; i < 3; ++i) {
			cin >> sides[i];
		}

		if (!sides[0]) {
			break;
		}

		sort(sides.begin(), sides.end());

		cout << (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2] ? "right\n" : "wrong\n");
	}
}
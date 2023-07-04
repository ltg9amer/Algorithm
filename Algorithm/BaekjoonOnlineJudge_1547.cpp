#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<bool> cups(3);
	int m;

	cups[0] = true;

	cin >> m;

	while (m--) {
		int x, y;

		cin >> x >> y;

		swap(cups[x - 1], cups[y - 1]);
	}

	if (find(cups.begin(), cups.end(), true) != cups.end()) {
		cout << find(cups.begin(), cups.end(), true) - cups.begin() + 1;
	}
}
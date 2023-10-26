#include <iostream>
#include <map>

using namespace std;

int main() {
	string name, type;
	int testCase, n;

	cin >> testCase;

	while (testCase--) {
		map<string, int> clothes;

		cin >> n;

		while (n--) {
			cin >> name >> type;

			clothes[type]++;
		}

		int count = 1;

		for (auto& cloth : clothes) {
			count *= cloth.second + 1;
		}

		cout << count - 1 << '\n';
	}
}
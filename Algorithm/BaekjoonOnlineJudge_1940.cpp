#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, cnt = 0;

	cin >> n >> m;

	vector<int> mats(n);

	for (int i = 0; i < n; ++i) {
		cin >> mats[i];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (mats[i] + mats[j] == m) {
				cnt++;

				break;
			}
		}
	}

	cout << cnt;
}
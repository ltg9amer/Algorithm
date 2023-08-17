#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<pair<int, int>> physicals(n);
	vector<int> ranks(n, 1);

	for (auto& physical : physicals) {
		cin >> physical.first >> physical.second;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i != j && physicals[i].first < physicals[j].first && physicals[i].second < physicals[j].second) {
				ranks[i]++;
			}
		}
	}

	for (auto rank : ranks) {
		cout << rank << ' ';
	}
}
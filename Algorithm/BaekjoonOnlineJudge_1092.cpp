#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, time = 0;

	cin >> n;

	vector<int> cranes(n);

	for (int i = 0; i < n; ++i) {
		cin >> cranes[i];
	}

	sort(cranes.begin(), cranes.end(), greater<int>());

	cin >> m;

	vector<int> boxes(m);

	for (int i = 0; i < m; ++i) {
		cin >> boxes[i];
	}

	sort(boxes.begin(), boxes.end(), greater<int>());

	if (cranes.front() < boxes.front()) {
		cout << -1;
	}
	else {
		while (!boxes.empty()) {
			for (auto crane : cranes) {
				for (auto box : boxes) {
					if (crane >= box) {
						boxes.erase(find(boxes.begin(), boxes.end(), box));

						break;
					}
				}
			}

			time++;
		}

		cout << time;
	}
}
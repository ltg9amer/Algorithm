#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, multiple, sum, minimumDifference = 10e9;

	cin >> n;

	vector<pair<int, int>> ingredients(n);

	for (auto& ingredient : ingredients) {
		cin >> ingredient.first >> ingredient.second;
	}

	for (int i = 1; i < 1 << n; ++i) {
		multiple = 1, sum = 0;

		for (int j = 0; j < n; ++j) {
			if (i & 1 << j) {
				multiple *= ingredients[j].first;
				sum += ingredients[j].second;
			}
		}

		minimumDifference = min(minimumDifference, abs(multiple - sum));
	}

	cout << minimumDifference;
}
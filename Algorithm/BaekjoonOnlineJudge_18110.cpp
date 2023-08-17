#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	double n, fifteenPer, mean = 0;

	cin >> n;

	vector<int> opinions(n);

	for (auto& opinion : opinions) {
		cin >> opinion;
	}

	sort(opinions.begin(), opinions.end());

	fifteenPer = round(n * 0.15);

	for (int i = fifteenPer; i < n - fifteenPer; ++i) {
		mean += opinions[i];
	}

	cout << (mean ? round(mean / (n - fifteenPer * 2)) : 0);
}
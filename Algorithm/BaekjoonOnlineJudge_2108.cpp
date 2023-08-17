#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> numCnts(8001);
	int n, maxVal = 0, maxIdx = INT_MAX;
	double sum = 0;

	cin >> n;

	vector<int> nums(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];

		maxVal = max(maxVal, ++numCnts[nums[i] + 4000]);
		sum += nums[i];
	}

	sort(nums.begin(), nums.end());

	for (int i = 0; i < numCnts.size(); ++i) {
		if (numCnts[i] == maxVal) {
			if (maxIdx == INT_MAX) {
				maxIdx = i;
			}
			else {
				maxIdx = i;

				break;
			}
		}
	}

	cout << (abs(sum / n) < 0.5 ? 0 : round(sum / n)) << '\n' << nums[n / 2] << '\n' << maxIdx - 4000 << '\n' << nums.back() - nums.front();
}
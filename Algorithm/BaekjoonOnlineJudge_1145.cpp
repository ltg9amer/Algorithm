#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums(5);
	int divisorCnt;

	for (int i = 0; i < 5; ++i) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());

	for (int i = nums.front(); ; ++i) {
		divisorCnt = 0;

		for (int j = 0; j < 5; ++j) {
			if (!(i % nums[j])) {
				divisorCnt++;
			}

			if (divisorCnt >= 3) {
				cout << i;

				return 0;
			}
		}
	}
}
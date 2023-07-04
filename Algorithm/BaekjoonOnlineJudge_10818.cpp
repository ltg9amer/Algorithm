#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, min, max;

	cin >> n;

	vector<int> nums(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	min = nums[0];
	max = nums[0];

	for (auto& item : nums) {
		if (item < min) {
			min = item;
		}
		else if (item > max) {
			max = item;
		}
	}

	cout << min << " " << max;
}
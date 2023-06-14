#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> nums(n);

	for (auto& num : nums) {
		cin >> num;
	}

	sort(nums.begin(), nums.end());

	for (auto num : nums) {
		cout << num << '\n';
	}
}
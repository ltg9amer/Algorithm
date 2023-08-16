#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> nums(n);

	for (auto& word : nums) {
		cin >> word;
	}

	sort(nums.begin(), nums.end());

	for (auto word : nums) {
		cout << word << '\n';
	}
}
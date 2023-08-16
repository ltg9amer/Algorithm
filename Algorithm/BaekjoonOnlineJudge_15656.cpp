#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> nums, seq;
int n, m;

void back_tracking(int curNode) {
	if (curNode == m) {
		for (int i = 0; i < m; ++i) {
			cout << seq[i] << ' ';
		}

		cout << '\n';
	}
	else {
		for (int i = 0; i < n; ++i) {
			seq[curNode] = nums[i];

			back_tracking(curNode + 1);
		}
	}
}

int main() {
	cin >> n >> m;

	nums.resize(n);
	seq.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());
	back_tracking(0);
}
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> distances;
vector<int> nums, seq;
int n, m;

void back_tracking(int curNode, int startNode) {
	if (curNode == m) {
		for (int i = 0; i < m; ++i) {
			cout << seq[i] << ' ';
		}

		cout << '\n';
	}
	else {
		int lastNum = -1;

		for (int i = startNode; i < n; ++i) {
			if (!distances[i] && lastNum != nums[i]) {
				distances[i] = true;
				seq[curNode] = lastNum = nums[i];

				back_tracking(curNode + 1, i);

				distances[i] = false;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	distances.resize(n);
	nums.resize(n);
	seq.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());
	back_tracking(0, 0);
}
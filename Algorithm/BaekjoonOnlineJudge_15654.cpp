#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
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
			if (!visited[i]) {
				visited[i] = true;
				seq[curNode] = nums[i];

				back_tracking(curNode + 1);

				visited[i] = false;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	visited.resize(n);
	nums.resize(n);
	seq.resize(n);

	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}

	sort(nums.begin(), nums.end());
	back_tracking(0);
}
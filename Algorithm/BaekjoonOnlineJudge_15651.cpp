#include <iostream>
#include <vector>

using namespace std;

vector<int> seq;
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
			seq[curNode] = i + 1;

			back_tracking(curNode + 1);
		}
	}
}

int main() {
	cin >> n >> m;

	seq.resize(n);
	back_tracking(0);
}
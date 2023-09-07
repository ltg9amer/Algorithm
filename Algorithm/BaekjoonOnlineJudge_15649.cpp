#include <iostream>
#include <vector>

using namespace std;

vector<bool> distances;
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
			if (!distances[i]) {
				distances[i] = true;
				seq[curNode] = i + 1;

				back_tracking(curNode + 1);

				distances[i] = false;
			}
		}
	}
}

int main() {
	cin >> n >> m;

	distances.resize(n);
	seq.resize(n);
	back_tracking(0);
}
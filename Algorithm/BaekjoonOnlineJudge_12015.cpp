#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> seq = { -1 };
	int n, elem, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> elem;

		if (elem > seq.back()) {
			seq.push_back(elem);

			cnt++;
		}
		else {
			*lower_bound(seq.begin(), seq.end(), elem) = elem;
		}
	}

	cout << cnt;
}
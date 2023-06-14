#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> a;
	int n, m, input;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;

		a.push_back(input);
	}

	sort(a.begin(), a.end());

	cin >> m;

	for (int i = 0; i < m; ++i) {
		cin >> input;
		cout << (*lower_bound(a.begin(), a.end() - 1, input) == input) << '\n';
	}
}
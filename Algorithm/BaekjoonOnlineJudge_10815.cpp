#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	set<int> cards;
	int n, m;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> m;

		cards.insert(m);
	}

	cin >> m;

	for (int i = 0; i < m; ++i) {
		cin >> n;
		cout << (*cards.lower_bound(n) == n) << ' ';
	}
}
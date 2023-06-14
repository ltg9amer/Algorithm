#include <iostream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	map<int, int> cards;
	int n, m;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> m;

		cards[m]++;
	}

	cin >> m;

	for (int i = 0; i < m; ++i) {
		cin >> n;
		cout << cards[n] << ' ';
	}
}
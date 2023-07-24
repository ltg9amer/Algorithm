#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> a;
	int n, l, ai;

	cin >> n >> l;

	for (int i = 1; i <= n; ++i) {
		cin >> ai;

		a.push({ ai, i });

		while (a.top().second < i - l + 1) {
			a.pop();
		}

		cout << a.top().first << ' ';
	}
}
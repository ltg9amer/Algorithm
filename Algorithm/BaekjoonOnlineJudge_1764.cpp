#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	unordered_map<string, int> neverListeners;
	priority_queue<string, vector<string>, greater<string>> neverViewers;
	string name;
	int n, m, cnt = 0;

	cin >> n >> m;

	while (n--) {
		cin >> name;

		neverListeners[name]++;
	}

	while (m--) {
		cin >> name;

		if (neverListeners[name]) {
			neverViewers.push(name);

			cnt++;
		}
	}

	cout << cnt << '\n';

	while (cnt--) {
		cout << neverViewers.top() << '\n';

		neverViewers.pop();
	}
}
#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	set<string> neverListeners;
	set<string> neverViewers;
	string name;
	int n, m, cnt = 0;

	cin >> n >> m;

	while (n--) {
		cin >> name;

		neverListeners.insert(name);
	}

	while (m--) {
		cin >> name;

		if (neverListeners.find(name) != neverListeners.end()) {
			neverViewers.insert(name);

			cnt++;
		}
	}

	cout << cnt << '\n';

	while (cnt--) {
		cout << *neverViewers.begin() << '\n';

		neverViewers.erase(*neverViewers.begin());
	}
}
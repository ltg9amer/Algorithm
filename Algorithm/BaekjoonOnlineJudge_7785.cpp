#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	set<string, greater<string>> logs;
	string name, commute;
	int n;

	cin >> n;

	while (n--) {
		cin >> name >> commute;

		if (commute.front() == 'e') {
			logs.insert(name);
		}
		else {
			logs.erase(name);
		}
	}

	for (auto& log : logs) {
		cout << log << '\n';
	}
}
#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	queue<int> numbers;
	string order;
	int n, x;

	cin >> n;

	while (n--) {
		cin >> order;

		if (order == "push") {
			cin >> x;

			numbers.push(x);
		}
		else if (order == "size") {
			cout << numbers.size() << '\n';
		}
		else if (order == "empty") {
			cout << numbers.empty() << '\n';
		}
		else if (!numbers.empty()) {
			if (order == "back") {
				cout << numbers.back() << '\n';
			}
			else {
				cout << numbers.front() << '\n';

				if (order == "pop") {
					numbers.pop();
				}
			}
		}
		else {
			cout << -1 << '\n';
		}
	}
}
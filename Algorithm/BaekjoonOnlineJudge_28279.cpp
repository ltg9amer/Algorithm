#include <deque>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	deque<int> deque;
	int n, order;

	cin >> n;

	while (n--) {
		cin >> order;

		switch (order) {
		case 1: {
			cin >> order;

			deque.push_front(order);
		}

			  break;

		case 2: {
			cin >> order;

			deque.push_back(order);
		}

			  break;


		case 3: {
			if (deque.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << deque.front() << '\n';

				deque.pop_front();
			}
		}

			  break;


		case 4: {
			if (deque.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << deque.back() << '\n';

				deque.pop_back();
			}
		}

			  break;


		case 5: {
			cout << deque.size() << '\n';
		}

			  break;


		case 6: {
			cout << deque.empty() << '\n';
		}

			  break;


		case 7: {
			cout << (deque.empty() ? -1 : deque.front()) << '\n';
		}

			  break;


		case 8: {
			cout << (deque.empty() ? -1 : deque.back()) << '\n';
		}

			  break;
		}
	}
}
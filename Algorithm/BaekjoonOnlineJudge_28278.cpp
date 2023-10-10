#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	stack<int> stack;
	int n, order;

	cin >> n;

	while (n--) {
		cin >> order;

		switch (order) {
		case 1: {
			cin >> order;

			stack.push(order);
		}

			  break;

		case 2: {
			if (stack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << stack.top() << '\n';

				stack.pop();
			}
		}

			  break;

		case 3: {
			cout << stack.size() << '\n';
		}

			  break;

		case 4: {
			cout << stack.empty() << '\n';
		}

			  break;

		case 5: {
			cout << (stack.empty() ? -1 : stack.top()) << '\n';
		}

			  break;
		}
	}
}
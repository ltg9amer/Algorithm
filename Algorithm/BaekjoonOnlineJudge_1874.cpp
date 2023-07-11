#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	vector<char> signs;
	stack<int> stack;
	int n, num, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> num;

		while (cnt < num) {
			stack.push(++cnt);
			signs.push_back('+');
		}

		if (stack.top() == num) {
			stack.pop();
			signs.push_back('-');
		}
		else if (stack.top() > num) {
			cout << "NO";

			return 0;
		}
	}

	for (auto sign : signs) {
		cout << sign << '\n';
	}
}
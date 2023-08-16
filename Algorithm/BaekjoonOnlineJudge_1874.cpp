#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	vector<char> signs;
	stack<int> stack;
	int n, word, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> word;

		while (cnt < word) {
			stack.push(++cnt);
			signs.push_back('+');
		}

		if (stack.top() == word) {
			stack.pop();
			signs.push_back('-');
		}
		else if (stack.top() > word) {
			cout << "NO";

			return 0;
		}
	}

	for (auto sign : signs) {
		cout << sign << '\n';
	}
}
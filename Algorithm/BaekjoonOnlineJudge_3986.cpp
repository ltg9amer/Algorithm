#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<char> pair;
	string word;
	int n, cnt = 0;

	cin >> n;

	while (n--) {
		cin >> word;

		for (int i = 0; i < word.size(); ++i) {
			if (pair.empty() || word[i] != pair.top()) {
				pair.push(word[i]);
			}
			else {
				pair.pop();
			}
		}

		if (pair.empty()) {
			cnt++;
		}

		while (!pair.empty()) {
			pair.pop();
		}
	}

	cout << cnt;
}
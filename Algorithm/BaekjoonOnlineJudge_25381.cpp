#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> idx;
	string s;
	int maxCnt = 0;

	cin >> s;

	for (int b = 0, i = 0; i < s.size(); ++i) {
		if (s[i] == 'B') {
			b++;

			idx.push(i);
		}
		else if (s[i] == 'C' && b) {
			s[idx.front()] = ' ';
			maxCnt++;
			b--;

			idx.pop();
		}
	}

	for (int a = 0, i = 0; i < s.size(); ++i) {
		if (s[i] == 'A') {
			a++;
		}
		else if (s[i] == 'B' && a) {
			maxCnt++;
			a--;
		}
	}

	cout << maxCnt;
}
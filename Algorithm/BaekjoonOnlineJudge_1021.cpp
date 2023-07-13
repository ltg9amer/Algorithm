#include <iostream>
#include <queue>

using namespace std;

int main() {
	deque<int> elements;
	int n, m, pos, cnt = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		elements.push_back(i);
	}

	while (m--) {
		cin >> pos;

		for (int i = 0; i < elements.size(); ++i) {
			if (elements[i] == pos) {
				if (i <= elements.size() / 2) {
					while (elements.front() != pos) {
						elements.push_back(elements.front());
						elements.pop_front();

						cnt++;
					}

					break;
				}
				else {
					while (elements.front() != pos) {
						elements.push_front(elements.back());
						elements.pop_back();

						cnt++;
					}

					break;
				}
			}
		}

		elements.pop_front();
	}

	cout << cnt;
}
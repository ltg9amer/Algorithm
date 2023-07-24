#include <deque>
#include <iostream>

using namespace std;

int main() {
	deque<int> x;
	string p, xStr;
	bool isReverse, isError;
	int t, n, xi = 0;

	cin >> t;

	while (t--) {
		cin >> p >> n >> xStr;

		x.clear();

		isReverse = isError = false;

		for (auto xiStr : xStr) {
			if (isdigit(xiStr)) {
				xi *= 10;
				xi += xiStr - '0';
			}
			else {
				if (xi) {
					x.push_back(xi);
				}

				xi = 0;
			}
		}

		for (auto pi : p) {
			if (pi == 'R') {
				isReverse = !isReverse;
			}
			else if (!x.empty()) {
				isReverse ? x.pop_back() : x.pop_front();
			}
			else {
				cout << "error\n";

				isError = true;

				break;
			}
		}

		if (!isError) {

			cout << '[';

			if (!x.empty()) {
				if (isReverse) {
					for (auto it = x.rbegin(); it != x.rend(); ++it) {
						cout << *it;

						if (it != x.rend() - 1) {
							cout << ',';
						}
					}
				}
				else {
					for (auto it = x.begin(); it != x.end(); ++it) {
						cout << *it;

						if (it != x.end() - 1) {
							cout << ',';
						}
					}
				}
			}

			cout << "]\n";
		}
	}
}
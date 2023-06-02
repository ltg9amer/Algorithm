#include <iostream>
#include <list>

using namespace std;

int main() {
	string keyLog;
	int t;

	cin >> t;

	while (t--) {
		cin >> keyLog;

		list<char> password;
		auto iter = password.begin();

		for (int i = 0; i < keyLog.size(); ++i) {
			switch (keyLog[i]) {
			case '-': {
				if (iter != password.end()) {
					iter = password.erase(iter);
				}
			}

					break;

			case '<': {
				if (iter != password.end()) {
					iter++;
				}
			}

					break;

			case '>': {
				if (iter != password.begin()) {
					iter--;
				}
			}

					break;

			default: {
				iter = password.insert(iter, keyLog[i]);
			}

				   break;
			}
		}

		password.reverse();

		for (auto ch : password) {
			cout << ch;
		}

		cout << '\n';
	}
}
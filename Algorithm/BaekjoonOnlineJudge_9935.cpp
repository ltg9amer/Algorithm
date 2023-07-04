#include <iostream>

using namespace std;

int main() {
	string str, expl, remain;

	cin >> str >> expl;

	for (int i = 0; i < str.size(); ++i) {
		remain.push_back(str[i]);

		if (remain.size() >= expl.size()) {
			bool inclExpl = true;

			for (int j = 0; j < expl.size(); ++j) {
				if (remain[remain.size() - expl.size() + j] != expl[j]) {
					inclExpl = false;

					break;
				}
			}

			if (inclExpl) {
				for (int j = 0; j < expl.size(); ++j) {
					remain.pop_back();
				}
			}
		}
	}

	if (remain.empty()) {
		cout << "FRULA";
	}
	else {
		cout << remain;
	}
}
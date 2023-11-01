#include <iostream>
#include <set>

using namespace std;

int main() {
	set<string> nicknames;
	string log;
	int n, emojiCount = 0;

	cin >> n;

	while (n--) {
		cin >> log;

		if (log == "ENTER") {
			nicknames.clear();
		}
		else if (nicknames.find(log) == nicknames.end()) {
			nicknames.insert(log);

			emojiCount++;
		}
	}

	cout << emojiCount;
}
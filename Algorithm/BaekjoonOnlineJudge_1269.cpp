#include <iostream>
#include <set>

using namespace std;

int main() {
	set<int> a, b;
	int nA, nB, input, cnt = 0;

	cin >> nA >> nB;

	for (int i = 0; i < nA; ++i) {
		cin >> input;

		a.insert(input);
	}

	for (int i = 0; i < nB; ++i) {
		cin >> input;

		b.insert(input);

		if (a.find(input) != a.end()) {
			cnt++;
		}
	}

	for (int i = 0; i < nA; ++i) {
		if (b.find(*a.begin()) != b.end()) {
			cnt++;
		}

		a.erase(a.begin());
	}

	cout << nA + nB - cnt;
}
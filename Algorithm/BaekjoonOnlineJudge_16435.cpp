#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, l;

	cin >> n >> l;

	vector<int> h(n);

	for (int i = 0; i < n; ++i) {
		cin >> h[i];
	}

	sort(h.begin(), h.end());

	for (auto hi : h) {
		if (l >= hi) {
			l++;
		}
	}

	cout << l;
}
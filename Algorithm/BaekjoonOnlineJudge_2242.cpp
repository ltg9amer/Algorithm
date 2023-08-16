#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cin >> n;

	vector<int> ls(n);

	for (int i = 0; i < n; ++i) {
		cin >> ls[i];
	}
}
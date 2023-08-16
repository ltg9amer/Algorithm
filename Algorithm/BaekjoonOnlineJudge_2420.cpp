#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	long long n, m;

	cin >> n >> m;
	cout << max(n, m) - min(n, m);
}
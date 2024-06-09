#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void hanoi(int n, int from, int to, int via) {
	if (n == 1) {
		cout << from << ' ' << to << '\n';

		return;
	}

	hanoi(n - 1, from, via, to);

	cout << from << ' ' << to << '\n';

	hanoi(n - 1, via, to, from);
}

int main() {
	string cnt;
	int n;

	cin >> n;

	cnt = to_string(pow(2, n));
	cnt = cnt.substr(0, cnt.find('.'));
	cnt.back() -= 1;

	cout << cnt << '\n';

	if (n <= 20) {
		hanoi(n, 1, 3, 2);
	}
}
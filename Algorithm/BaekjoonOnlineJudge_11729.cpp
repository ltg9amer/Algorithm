#include <iostream>

using namespace std;

int hanoi(int n) {
	if (n == 1) {
		return n;
	}

	return 2 * hanoi(n - 1) + 1;
}

void move(int n, int from, int to) {
	cout << from << ' ' << to << '\n';
}

void hanoi(int n, int from, int to, int via) {
	if (n == 1) {
		move(n, from, to);

		return;
	}

	hanoi(n - 1, from, via, to);
	move(n, from, to);
	hanoi(n - 1, via, to, from);
}

int main() {
	int n;

	cin >> n;
	cout << hanoi(n) << '\n';

	hanoi(n, 1, 3, 2);
}
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string operation;
	int m, s = 0, x;

	cin >> m;

	while (m--)	{
		cin >> operation;

		if (operation == "add") {
			cin >> x;

			s |= 1 << x;
		}
		else if (operation == "remove") {
			cin >> x;

			s &= ~(1 << x);
		}
		else if (operation == "check") {
			cin >> x;
			cout << bool(s & 1 << x) << '\n';
		}
		else if (operation == "toggle") {
			cin >> x;

			s ^= 1 << x;
		}
		else if (operation == "all") {
			s = (1 << 21) - 1;
		}
		else if (operation == "empty") {
			s = 0;
		}
	}
}
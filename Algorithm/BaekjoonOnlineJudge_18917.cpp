#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> sequence = { 0 };
	int m, query;
	long long sum = 0, xorNum = 0;

	cin >> m;

	while (m--) {
		cin >> query;

		switch (query)
		{
		case 1: {
			cin >> query;

			sum += query;
			xorNum ^= query;
		}

			  break;

		case 2: {
			cin >> query;

			sum -= query;
			xorNum ^= query;
		}
			  break;

		case 3: {
			cout << sum << '\n';
		}

			  break;

		case 4: {
			cout << xorNum << '\n';
		}

			  break;
		}
	}
}
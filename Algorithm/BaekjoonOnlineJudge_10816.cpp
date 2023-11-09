#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, countingCard;

	cin >> n;

	vector<int> cards(n);

	for (auto& card : cards) {
		cin >> card;
	}

	sort(cards.begin(), cards.end());

	cin >> m;

	while (m--) {
		cin >> countingCard;
		cout << upper_bound(cards.begin(), cards.end(), countingCard) - lower_bound(cards.begin(), cards.end(), countingCard) << ' ';
	}
}
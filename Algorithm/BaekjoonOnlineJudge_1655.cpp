#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	priority_queue<int, vector<int>, greater<int>> maxes;
	priority_queue<int> mins;
	int n, input, temp;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;

		if (mins.size() == maxes.size()) {
			mins.push(input);
		}
		else {
			maxes.push(input);
		}

		if (!maxes.empty() && mins.top() > maxes.top()) {
			temp = mins.top();

			mins.pop();
			mins.push(maxes.top());
			maxes.pop();
			maxes.push(temp);
		}

		cout << mins.top() << '\n';
	}
}
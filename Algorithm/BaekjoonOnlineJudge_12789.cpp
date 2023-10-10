#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> space;
	int n, num, order = 1;

	cin >> n;

	while (n--) {
		cin >> num;

		if (num > order) {
			space.push(num);
		}
		else if (num == order) {
			order++;

			while (!space.empty() && space.top() == order) {
				space.pop();

				order++;
			}
		}
	}

	cout << (space.empty() ? "Nice" : "Sad");
}
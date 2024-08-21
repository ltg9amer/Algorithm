#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> isVisited;
string a, b, closestNumber;
bool solved;
int bSize;

void back_tracking_equal_upper(int currentIndex) {
	if (closestNumber < a) {
		return;
	}

	if (currentIndex >= bSize) {
		solved = true;

		return;
	}

	char currentNumber = ' ';

	for (int i = 0; i < bSize; ++i) {
		if (currentNumber != b[i] && !isVisited[i]) {
			currentNumber = closestNumber[currentIndex] = b[i];
			isVisited[i] = true;

			back_tracking_equal_upper(currentIndex + 1);

			if (solved) {
				break;
			}

			isVisited[i] = false;
		}
	}
}

void back_tracking_lower(int currentIndex) {
	if (closestNumber >= a) {
		return;
	}

	if (currentIndex >= bSize) {
		solved = true;

		return;
	}

	char currentNumber = ' ';

	for (int i = 0; i < bSize; ++i) {
		if (!(!currentIndex && b[i] == '0') && currentNumber != b[i] && !isVisited[i]) {
			currentNumber = closestNumber[currentIndex] = b[i];
			isVisited[i] = true;

			back_tracking_lower(currentIndex + 1);

			if (solved) {
				break;
			}

			isVisited[i] = false;
		}
	}
}

int main() {
	cin >> a >> b;

	bSize = b.size();

	sort(b.begin(), b.end());
	isVisited.resize(bSize);
	closestNumber.resize(bSize, '9');
	back_tracking_equal_upper(0);

	cout << (solved ? closestNumber : "0") << '\n';

	solved = false;

	sort(b.begin(), b.end(), greater<>());
	fill(isVisited.begin(), isVisited.end(), false);
	fill(closestNumber.begin(), closestNumber.end(), '0');
	back_tracking_lower(0);

	cout << (solved ? closestNumber : "0");
}
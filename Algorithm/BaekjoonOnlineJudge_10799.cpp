#include <iostream>
#include <stack>

using namespace std;

int main() {
	string parenthesis;
	int cntLeft = 0, pieceAmount = 0;
	bool isLeft = false;

	cin >> parenthesis;

	for (int i = 0; i < parenthesis.size(); ++i) {
		if (parenthesis[i] == '(') {
			cntLeft++;
			isLeft = true;
		}
		else if (isLeft) {
			cntLeft--;
			pieceAmount += cntLeft;
			isLeft = false;
		}
		else {
			cntLeft--;
			pieceAmount++;
		}
	}

	cout << pieceAmount;
}
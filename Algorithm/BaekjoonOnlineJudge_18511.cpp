#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> k;
int n, kAmount, maxNum;

void make_combination(int word, int cnt) {
	if (word > n) {
		return;
	}

	for (int i = 0; i < kAmount; ++i) {
		make_combination(word + cnt * k[i], cnt * 10);
	}

	maxNum = max(maxNum, word);
}

int main() {
	cin >> n >> kAmount;

	k.resize(kAmount);

	for (int i = 0; i < kAmount; ++i) {
		cin >> k[i];
	}

	sort(k.begin(), k.end());
	make_combination(0, 1);

	cout << maxNum;
}
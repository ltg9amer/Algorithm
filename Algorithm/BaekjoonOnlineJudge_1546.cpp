#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	float score, max = 0, sum = 0;

	cin >> n;

	vector<float> basket(n);

	for (int i = 0; i < n; ++i) {
		cin >> score;

		if (score > max) {
			max = score;
		}

		basket[i] = score;
	}

	for (int i = 0; i < n; ++i) {
		sum += basket[i] / max * 100;
	}

	cout.precision(2);

	cout << fixed << sum / n;
}
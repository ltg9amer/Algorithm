#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double kim, lim;
	int n, round = 1;

	cin >> n >> kim >> lim;

	while (min(kim, lim) != max(kim, lim) - 1 || !(min((int)kim, (int)lim) % 2)) {
		kim = ceil(kim / 2);
		lim = ceil(lim / 2);
		round++;
	}

	cout << round;
}
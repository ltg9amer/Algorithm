#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	unordered_map<string, int> resistors = { {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4}, {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9} };
	string resistor;
	long long value = 0;

	for (int i = 2; i >= 0; --i) {
		cin >> resistor;

		if (i) {
			value *= 10;
			value += resistors[resistor];
		}
		else {
			for (int j = 0; j < resistors[resistor]; ++j) {
				value *= 10;
			}
		}
	}

	cout << value;
}
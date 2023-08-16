#include <iostream>

using namespace std;

int main() {
	string word;

	cin >> word;

	for (auto alphabet : word) {
		if (alphabet >= 'a' && alphabet <= 'z') {
			cout << (char)toupper(alphabet);
		}
		else {
			cout << (char)tolower(alphabet);
		}
	}
}
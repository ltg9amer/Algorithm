#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;

	getline(cin, s);

	for (auto word : s) {
		if ((word >= 'A' && word <= 'M') || (word >= 'a' && word <= 'm')) {
			cout << char(word + 13);
		}
		else if ((word >= 'N' && word <= 'Z') || (word >= 'n' && word <= 'z')) {
			cout << char(word - 13);
		}
		else {
			cout << char(word);
		}
	}
}
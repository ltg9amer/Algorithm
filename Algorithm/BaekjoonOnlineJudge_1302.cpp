#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> books;
	string title;
	int n;

	cin >> n;

	while (n--) {
		cin >> title;

		books[title]++;
	}

	for (auto book : books) {
		if (book.second > n) {
			title = book.first;
			n = book.second;
		}
	}

	cout << title;
}
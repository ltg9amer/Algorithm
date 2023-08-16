#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
	set<string> groups;
	string word;
	int n;

	cin >> n;

	while (n--) {
		cin >> word;

		sort(word.begin(), word.end());
		groups.insert(word);
	}

	cout << groups.size();
}
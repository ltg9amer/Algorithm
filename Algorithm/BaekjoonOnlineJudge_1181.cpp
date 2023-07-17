#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const string&, const string&);

int main() {
	int n;

	cin >> n;

	vector<string> words(n);

	for (auto& word : words) {
		cin >> word;
	}

	sort(words.begin(), words.end(), compare);
	words.erase(unique(words.begin(), words.end()), words.end());

	for (auto word : words) {
		cout << word << '\n';
	}
}

bool compare(const string& fWord, const string& sWord) {
	if (fWord.size() < sWord.size()) {
		return true;
	}
	else if (fWord.size() == sWord.size() && fWord < sWord) {
		return true;
	}

	return false;
}
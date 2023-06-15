#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	unordered_map<int, string> pokemonsNum;
	unordered_map<string, int> pokemonsName;
	string name;
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		cin >> name;

		pokemonsNum.insert({ i, name });
		pokemonsName.insert({ name, i });
	}

	while (m--) {
		cin >> name;

		if (isdigit(name[0])) {
			cout << pokemonsNum[stoi(name)] << '\n';
		}
		else {
			cout << pokemonsName[name] << '\n';
		}
	}
}
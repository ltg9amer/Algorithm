#include <algorithm>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

int main() {
	vector<tuple<int, int, int, string>> students;
	string name;
	int n, d, m, y;

	cin >> n;

	while (n--) {
		cin >> name >> d >> m >> y;

		students.push_back(make_tuple(y, m, d, name));
	}

	sort(students.begin(), students.end());

	cout << get<3>(students.back()) << '\n' << get<3>(students.front());
}
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, string>&, const pair<int, string>&);

int main() {
	int n;

	cin >> n;

	vector<pair<int, string>> members(n);

	for (auto& member : members) {
		cin >> member.first >> member.second;
	}

	stable_sort(members.begin(), members.end(), compare);

	for (auto member : members) {
		cout << member.first << ' ' << member.second << '\n';
	}
}

bool compare(const pair<int, string>& fMember, const pair<int, string>& sMember) {
	return fMember.first < sMember.first;
}
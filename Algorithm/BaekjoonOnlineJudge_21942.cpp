#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	long long month[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 1; i <= 12; ++i) {
		month[i] += month[i - 1];
	}

	map<string, long long> logs, fines;
	string l, date, time, object, name;
	long long n, f, limit, over;

	cin >> n >> l >> f;

	limit = stoll(l.substr(7)) + (stoll(l.substr(4, 2)) + stoll(l.substr(0, 3)) * 24) * 60;

	while (n--) {
		cin >> date >> time >> object >> name;

		string key = object + name;
		long long minute = stoll(time.substr(3)) + (stoll(time.substr(0, 2)) + (stoll(date.substr(8)) - 1) * 24 + month[stoll(date.substr(5, 2)) - 1] * 24) * 60;

		if (logs.find(key) != logs.end()) {
			over = minute - logs[key] - limit;

			if (over > 0) {
				if (fines.find(name) != fines.end()) {
					fines[name] += f * over;
				}
				else {
					fines.insert({ name, f * over });
				}
			}

			logs.erase(key);
		}
		else {
			logs.insert({ key, minute });
		}
	}

	if (fines.empty()) {
		cout << -1;
	}
	else {
		for (auto fine : fines) {
			cout << fine.first << ' ' << fine.second << '\n';
		}
	}
}
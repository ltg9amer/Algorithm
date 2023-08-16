#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	unordered_set<string> jobs;
	string job;
	int n, k;

	cin >> n;

	while (n--) {
		cin >> job;

		jobs.insert(job);
	}

	cin >> k;

	while (k--) {
		cin >> job;

		if (jobs.find(job) != jobs.end()) {
			jobs.erase(job);
		}
	}

	cout << jobs.size() << '\n';

	for (auto unexpJob : jobs) {
		cout << unexpJob << '\n';
	}
}
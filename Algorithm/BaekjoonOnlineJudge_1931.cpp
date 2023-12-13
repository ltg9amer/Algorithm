#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, meetingTime = 0, meetingCount = 0;

	cin >> n;

	vector<pair<int, int>> meetings(n);

	for (auto& meeting : meetings) {
		cin >> meeting.second >> meeting.first;
	}

	sort(meetings.begin(), meetings.end());

	for (auto& meeting : meetings) {
		if (meeting.second >= meetingTime) {
			meetingTime = meeting.first;
			meetingCount++;
		}
	}

	cout << meetingCount;
}
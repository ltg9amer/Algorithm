#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	queue<int> releases;

	for (int i = 0; i < progresses.size(); ++i) {
		releases.push((99.0 - (float)progresses[i]) / (float)speeds[i] + 1);
	}

	progresses.clear();

	while (!releases.empty()) {
		int last = releases.front(), today = 1;

		releases.pop();

		while (!releases.empty() && last >= releases.front()) {
			today++;

			releases.pop();
		}

		progresses.push_back(today);
	}

	return progresses;
}
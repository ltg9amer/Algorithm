#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long solution(int n, vector<int> times) {
	sort(times.begin(), times.end());

	long minimumTime = times.front(), maximumTime = times.back() * (long)n, middleTime, peopleCount;

	while (minimumTime <= maximumTime) {
		middleTime = (minimumTime + maximumTime) * 0.5;
		peopleCount = 0;

		for (auto& time : times) {
			peopleCount += middleTime / time;

			if (peopleCount >= n) {
				break;
			}
		}

		peopleCount >= n ? maximumTime = middleTime - 1 : minimumTime = middleTime + 1;
	}

	return minimumTime;
}
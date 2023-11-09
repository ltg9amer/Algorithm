#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long solution(int n, vector<int> times) {
	sort(times.begin(), times.end());

	long long minimumTime = times.front(), maximumTime = times.back() * (long)n, middleTime, peopleCount, fastestTime = maximumTime;

	while (minimumTime <= maximumTime) {
		middleTime = (minimumTime + maximumTime) / 2;
		peopleCount = 0;

		for (auto& time : times) {
			peopleCount += middleTime / time;

			if (peopleCount >= n) {
				break;
			}
		}

		if (peopleCount >= n) {
			fastestTime = min(fastestTime, middleTime);
			maximumTime = middleTime - 1;
		}
		else {
			minimumTime = middleTime + 1;
		}
	}

	return fastestTime;
}
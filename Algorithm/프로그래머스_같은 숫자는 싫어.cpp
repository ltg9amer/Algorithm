#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) {
	queue<int> dedupl;

	for (int i = 0; i < arr.size(); ++i) {
		if (dedupl.empty() || arr[i] != dedupl.back()) {
			dedupl.push(arr[i]);
		}
	}

	arr.clear();

	while (!dedupl.empty()) {
		arr.push_back(dedupl.front());
		dedupl.pop();
	}

	return arr;
}
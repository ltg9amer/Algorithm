#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
	queue<int> procs;
	priority_queue<int> priors;
	int order = 0;

	for (auto priority : priorities) {
		procs.push(priority);
		priors.push(priority);
	}

	while (!procs.empty()) {
		if (procs.front() != priors.top()) {
			procs.push(procs.front());

			if (!location) {
				location = procs.size() - 1;
			}
		}
		else {
			order++;

			priors.pop();

			if (!location) {
				return order;
			}
		}

		procs.pop();

		location--;
	}
}
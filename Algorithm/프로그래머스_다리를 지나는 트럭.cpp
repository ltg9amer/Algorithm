#include <iostream>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	queue<int> bridge, truck;
	int curWeight = 0, time = 0;

	for (int i = 0; i < truck_weights.size(); ++i) {
		truck.push(truck_weights[i]);
	}

	for (int i = 0; i < truck_weights.size(); ++i) {
		while (true) {
			if (bridge.size() == bridge_length) {
				curWeight -= bridge.front();

				bridge.pop();
			}

			if (curWeight + truck.front() <= weight) {
				break;
			}

			bridge.push(0);

			time++;
		}

		bridge.push(truck.front());

		curWeight += truck.front();

		truck.pop();

		time++;
	}

	return time + bridge_length;
}
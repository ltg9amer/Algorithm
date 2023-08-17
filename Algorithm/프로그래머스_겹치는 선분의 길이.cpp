#include <iostream>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
	int colLine, colLen = 0;

	for (int i = -100; i <= 100; ++i) {
		colLine = 0;

		for (auto line : lines) {
			if (i >= line.front() && i < line.back()) {
				colLine++;
			}
		}

		if (colLine >= 2) {
			colLen++;
		}
	}

	return colLen;
}
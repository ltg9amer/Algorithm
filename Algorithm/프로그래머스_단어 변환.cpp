#include <iostream>
#include <queue>

using namespace std;

int solution(string begin, string target, vector<string> words) {
	vector<int> visited(words.size(), -1);
	queue<pair<string, int>> nearWords;
	int modCnt, diffCnt;

	nearWords.push({ begin, 0 });

	while (!nearWords.empty()) {
		begin = nearWords.front().first;
		modCnt = nearWords.front().second;

		nearWords.pop();

		if (begin == target) {
			return modCnt;
		}

		for (int i = 0; i < words.size(); ++i) {
			if (visited[i] == -1) {
				diffCnt = 0;

				for (int j = 0; j < begin.size(); ++j) {
					if (begin[j] != words[i][j]) {
						diffCnt++;
					}
				}

				if (diffCnt == 1) {
					nearWords.push({ words[i], modCnt + 1 });

					visited[i] = modCnt + 1;
				}
			}
		}
	}

	return 0;
}
#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	unordered_map<string, pair<unordered_map<string, bool>, int>> reportStatistics;
	vector<int> resultMailCounts(id_list.size());

	for (auto& reportLog : report) {
		istringstream stringParser(reportLog);
		string complainant, defendant;

		stringParser >> complainant >> defendant;

		if (!reportStatistics[complainant].first[defendant]) {
			reportStatistics[complainant].first[defendant] = true;
			reportStatistics[defendant].second++;
		}
	}

	for (int i = 0; i < id_list.size(); ++i) {
		for (auto& defendant : reportStatistics[id_list[i]].first) {
			if (reportStatistics[defendant.first].second >= k) {
				resultMailCounts[i]++;
			}
		}
	}

	return resultMailCounts;
}
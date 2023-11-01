#include <iostream>
#include <set>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	unordered_map<string, pair<set<string>, int>> reportStatistics;
	vector<int> resultMailCounts(id_list.size());

	for (auto& reportLog : report) {
		string complainant, defendant;
		istringstream stringParser(reportLog);

		stringParser >> complainant >> defendant;

		auto& complainantReports = reportStatistics[complainant].first;

		if (complainantReports.find(defendant) == complainantReports.end()) {
			complainantReports.insert(defendant);

			reportStatistics[defendant].second++;
		}
	}

	for (int i = 0; i < id_list.size(); ++i) {
		for (auto& defendant : reportStatistics[id_list[i]].first) {
			if (reportStatistics[defendant].second >= k) {
				resultMailCounts[i]++;
			}
		}
	}

	return resultMailCounts;
}
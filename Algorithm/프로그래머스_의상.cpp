#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<vector<string>> clothes) {
	unordered_map<string, int> types;
	int caseCount = 1;

	for (auto cloth : clothes) {
		types[cloth.back()]++;
	}

	for (auto type : types) {
		caseCount *= type.second + 1;
	}

	return caseCount - 1;
}
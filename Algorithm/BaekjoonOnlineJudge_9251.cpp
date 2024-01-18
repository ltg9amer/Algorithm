#include <iostream>
#include <vector>

using namespace std;

int main() {
	string firstString, secondString;

	cin >> firstString >> secondString;

	vector<vector<int>> longestCommonSubsequenceLength(firstString.size() + 1, vector<int>(secondString.size() + 1));

	for (int i = 1; i <= firstString.size(); ++i) {
		for (int j = 1; j <= secondString.size(); ++j) {
			if (firstString[i - 1] == secondString[j - 1]) {
				longestCommonSubsequenceLength[i][j] = longestCommonSubsequenceLength[i - 1][j - 1] + 1;
			}
			else {
				longestCommonSubsequenceLength[i][j] = max(longestCommonSubsequenceLength[i - 1][j], longestCommonSubsequenceLength[i][j - 1]);
			}
		}
	}

	cout << longestCommonSubsequenceLength.back().back();
}
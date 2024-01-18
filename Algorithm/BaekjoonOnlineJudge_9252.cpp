#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	string firstString, secondString, longestCommonSubsequence;
	int i, j;

	cin >> firstString >> secondString;

	vector<vector<int>> longestCommonSubsequenceLengths(firstString.size() + 1, vector<int>(secondString.size() + 1));

	for (i = 1; i <= firstString.size(); ++i) {
		for (j = 1; j <= secondString.size(); ++j) {
			if (firstString[i - 1] == secondString[j - 1]) {
				longestCommonSubsequenceLengths[i][j] = longestCommonSubsequenceLengths[i - 1][j - 1] + 1;
			}
			else {
				longestCommonSubsequenceLengths[i][j] = max(longestCommonSubsequenceLengths[i - 1][j], longestCommonSubsequenceLengths[i][j - 1]);
			}
		}
	}

	i--;
	j--;

	while (longestCommonSubsequenceLengths[i][j]) {
		if (longestCommonSubsequenceLengths[i][j] == longestCommonSubsequenceLengths[i - 1][j]) {
			i--;
		}
		else if (longestCommonSubsequenceLengths[i][j] == longestCommonSubsequenceLengths[i][j - 1]) {
			j--;
		}
		else {
			i--;
			j--;

			longestCommonSubsequence.push_back(firstString[i]);
		}
	}

	reverse(longestCommonSubsequence.begin(), longestCommonSubsequence.end());

	cout << longestCommonSubsequenceLengths.back().back() << '\n' << longestCommonSubsequence;
}
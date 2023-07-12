#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> result;
	unordered_map<string, string> users;

	for (const auto& item : record) {
		string word, userID, nickname;
		istringstream iss(item);

		iss >> word >> userID >> nickname;

		switch (word[0])
		{
		case 'E':
		case 'C': {
			users[userID] = nickname;
		}

				break;

		default:
			break;
		}
	}

	for (const auto& item : record) {
		string word, userID, nickname;
		istringstream iss(item);

		iss >> word >> userID >> nickname;

		switch (word[0])
		{
		case 'E': {
			result.push_back(users[userID] + "님이 들어왔습니다.");
		}

				break;

		case 'L': {
			result.push_back(users[userID] + "님이 나갔습니다.");
		}

				break;

		default:
			break;
		}
	}

	return result;
}
#include <iostream>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
	unordered_set<char> checkDuplicate;

	for (int i = 0; i < my_string.size(); ++i) {
		if (checkDuplicate.find(my_string[i]) == checkDuplicate.end()) {
			checkDuplicate.insert(my_string[i]);
		}
		else {
			my_string.erase(my_string.begin() + i--);
		}
	}

	return my_string;
}
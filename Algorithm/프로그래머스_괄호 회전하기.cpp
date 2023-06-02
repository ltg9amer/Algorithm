#include <iostream>
#include <stack>

using namespace std;

int solution(string s) {
	int x = 0;

	for (int i = 0; i < s.size(); ++i) {
		stack<char> brackets;

		for (int j = 0; j < s.size(); ++j) {
			if (s[j] == '(' || s[j] == '{' || s[j] == '[') {
				brackets.push(s[j]);
			}
			else if (!brackets.empty()) {
				if ((s[j] == ')' && brackets.top() == '(') || (s[j] == '}' && brackets.top() == '{') || (s[j] == ']' && brackets.top() == '[')) {
					brackets.pop();
				}
				else {
					brackets.push(NULL);

					break;
				}
			}
			else {
				brackets.push(NULL);

				break;
			}
		}

		if (brackets.empty()) {
			x++;
		}

		s.push_back(s.front());
		s.erase(s.begin());
	}

	return x;
}
#include <iostream>
#include <stack>

using namespace std;

int priority(char op) {
	switch (op) {
	case '(':
	case ')':
		return 0;

	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;
	}
}

int main() {
	stack<char> operators;
	string infix;
	int parAmount = 0;

	cin >> infix;

	for (int i = 0; i < infix.size(); ++i) {
		if (infix[i] >= 'A' && infix[i] <= 'Z') {
			cout << infix[i];
		}
		else {
			if (infix[i] == '(') {
				parAmount++;
			}
			else if (infix[i] == ')') {
				while (operators.top() != '(') {
					cout << operators.top();

					operators.pop();
				}

				operators.pop();

				parAmount--;

				continue;
			}
			else {
				while (!operators.empty() && (priority(infix[i]) <= priority(operators.top()))) {
					cout << operators.top();

					operators.pop();
				}
			}

			operators.push(infix[i]);
		}
	}

	while (!operators.empty()) {
		cout << operators.top();

		operators.pop();
	}
}
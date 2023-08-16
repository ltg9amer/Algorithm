#include <iostream>

using namespace std;

int main() {
	string quizRes;
	int tc, sumScore, conScore;

	cin >> tc;

	while (tc--) {
		cin >> quizRes;

		sumScore = conScore = 0;

		for (int i = 0; i < quizRes.size(); ++i) {
			if (quizRes[i] == 'O') {
				conScore++;
			}
			else {
				conScore = 0;
			}

			sumScore += conScore;
		}

		cout << sumScore << '\n';
	}
}
#include <iostream>

using namespace std;

int main() {
	string grade;
	double gradePoint = 0;

	cin >> grade;

	cout.precision(1);

	if (grade[0] != 'F') {
		gradePoint = 4 - (grade[0] - 'A');

		if (grade[1] == '+') {
			gradePoint += 0.3;
		}
		else if (grade[1] == '-') {
			gradePoint -= 0.3;
		}
	}

	cout << fixed << gradePoint;
}
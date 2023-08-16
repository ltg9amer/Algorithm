#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<string> solution(vector<string> quiz) {
	vector<string> exp(5);

	for (int i = 0; i < quiz.size(); ++i) {
		vector<int> nums(3);
		string elem;
		istringstream iss(quiz[i]);
		int j = 0;

		while (getline(iss, elem, ' ')) {
			if (!(j % 2)) {
				bool isNeg = false;

				for (int k = 0; k < elem.size(); ++k) {
					if (!k && elem[k] == '-') {
						isNeg = true;

						continue;
					}

					nums[j / 2] *= 10;
					nums[j / 2] += elem[k] - '0';
				}

				if (isNeg) {
					nums[j / 2] *= -1;
				}
			}

			exp[j++] = elem;
		}

		if ((exp[1] == "+" && nums[0] + nums[1] == nums[2]) || (exp[1] == "-" && nums[0] - nums[1] == nums[2])) {
			quiz[i] = "O";
		}
		else {
			quiz[i] = "X";
		}
	}

	return quiz;
}
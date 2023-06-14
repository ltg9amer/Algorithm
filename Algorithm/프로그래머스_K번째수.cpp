#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> temp;

    for (auto& command : commands) {
        for (int j = command[0] - 1; j < command[1]; ++j) {
            temp.push_back(array[j]);
        }

        sort(temp.begin(), temp.end());

        command[2] = temp[((double)command[2] - 1)];

        temp.clear();
    }

    for (auto command : commands) {
        temp.push_back(command[2]);
    }

    return temp;
}
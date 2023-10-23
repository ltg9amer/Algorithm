#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    if (direction == "left") {
        numbers.push_back(numbers.front());
        numbers.erase(numbers.begin());
    }
    else {
        reverse(numbers.begin(), numbers.end());
        numbers.push_back(numbers.front());
        reverse(numbers.begin(), numbers.end());
        numbers.pop_back();
    }

    return numbers;
}
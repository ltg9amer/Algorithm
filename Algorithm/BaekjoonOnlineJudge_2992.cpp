#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	string x;

	cin >> x;
	cout << (next_permutation(x.begin(), x.end()) ? x : "0");
}
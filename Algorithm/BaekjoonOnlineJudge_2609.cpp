#include <iostream>

using namespace std;

int euclidean(int a, int b) {
	return b ? euclidean(b, a % b) : a;
}

int main() {
	int a, b;

	cin >> a >> b;
	cout << euclidean(a, b) << '\n' << a * b / euclidean(a, b);
}
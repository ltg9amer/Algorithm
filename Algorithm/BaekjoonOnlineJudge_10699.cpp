#include <ctime>
#include <iostream>

using namespace std;

int main() {
	time_t curTime = time(NULL);
	struct tm* curTm = localtime(&curTime);

	cout << 1900 + curTm->tm_year << '-' << (curTm->tm_mon + 1) / 10 << (curTm->tm_mon + 1) % 10 << '-' << curTm->tm_mday;
}
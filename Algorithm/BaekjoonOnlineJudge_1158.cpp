#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> josephus;
	int n, k, index = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; ++i)
	{
		josephus.push_back(i);
	}

	cout << '<';

	while (!josephus.empty())
	{
		if (++index == k)
		{
			cout << josephus.front() << (josephus.size() == 1 ? ">" : ", ");

			index = 0;
		}
		else
		{
			josephus.push_back(josephus.front());
		}

		josephus.pop_front();
	}
}
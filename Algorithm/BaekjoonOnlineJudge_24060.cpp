#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector<int>& a, vector<int>& sorted, const int& low, const int& high, const int& goal, int& cnt) {
	if (low >= high) {
		return;
	}

	int mid = (low + high) / 2, i, j, k;

	merge_sort(a, sorted, i = k = low, mid, goal, cnt);
	merge_sort(a, sorted, j = mid + 1, high, goal, cnt);

	while (i <= mid && j <= high) {
		sorted[k++] = a[i] <= a[j] ? a[i++] : a[j++];
	}

	while (i <= mid) {
		sorted[k++] = a[i++];
	}

	while (j <= high) {
		sorted[k++] = a[j++];
	}

	i = k = low;

	while (i <= high) {
		if (++cnt == goal) {
			cout << sorted[k];
		}

		a[i++] = sorted[k++];
	}
}

int main() {
	int n, k, cnt = 0;

	cin >> n >> k;

	vector<int> a(n), sorted(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	merge_sort(a, sorted, 0, n - 1, k, cnt);

	if (cnt < k) {
		cout << -1;
	}
}
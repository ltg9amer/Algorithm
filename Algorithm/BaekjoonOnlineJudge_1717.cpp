#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

int find_parent(int word) {
	if (word == parent[word]) {
		return word;
	}

	return parent[word] = find_parent(parent[word]);
}

void union_parent(int a, int b) {
	a = find_parent(a);
	b = find_parent(b);

	if (a < b) {
		parent[b] = a;
	}
	else {
		parent[a] = b;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m, a, b;

	cin >> n >> m;

	parent.resize(n + 1);

	for (int i = 0; i <= n; ++i) {
		parent[i] = i;
	}

	while (m--) {
		cin >> n >> a >> b;

		if (n) {
			cout << (find_parent(a) == find_parent(b) ? "YES\n" : "NO\n");
		}
		else {
			union_parent(a, b);
		}
	}
}
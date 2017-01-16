#include <bits/stdc++.h>
#include "eularian.h"

int main() {
	int n;
	string s;
	forX() {
		cin >> n;
		vvi graph = mi(26, 26, 0);
		rep(i, 0, n) {
			cin >> s;
			int a = s[0] - 'a', b = s.back() - 'a';
			graph[a][b]++;
		}

		if (sz(eularianPath(graph, true)) == n + 1)
			printf("Ordering is possible.\n");
		else
			printf("The door cannot be opened.\n");
	}
}

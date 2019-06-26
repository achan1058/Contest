#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	string s1, s2;
	forX() {
		int n, q;
		cin >> n >> q;
		vvi graph = mi(26, 26, inf);
		rep(i, 0, n) {
			cin >> s1 >> s2;
			graph[s1[0] - 'A'][s2[0] - 'A'] = 1;
			graph[s2[0] - 'A'][s1[0] - 'A'] = 1;
		}

		printX();
		vvi paths = floyd(graph).second;
		rep(i, 0, q) {
			cin >> s1 >> s2;
			vi path = getPath(paths[s1[0] - 'A'], s1[0] - 'A', s2[0] - 'A');
			irep(p, path)
				printv(char(p + 'A'));
			print();
		}
	}
}

#include <bits/stdc++.h>
#include "matching.h"
#include "point.h"

int main() {
	int n, m, s, v;
	while (cin >> n >> m >> s >> v) {
		vector<ptd> gopher(n), hole(m);
		vvb graph = mb(n, m, false);
		double dist = s * v;
		read(gopher);
		read(hole);
		drep(i, j, n, m) {
			if (gopher[i].dist(hole[j]) <= s * v + eps)
				graph[i][j] = true;
		}
		printf("%d\n", n - sz(matching(graph)));
	}
}

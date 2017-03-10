#include <bits/stdc++.h>
#include "point.h"
#include "matching.h"
#include "header.h"

int main() {
	int n, m, s, v;
	while (cin >> n >> m >> s >> v) {
		vector<ptd> gophers(n), holes(m);
		read(gophers);
		read(holes);
		vvi dist = mi(n, m, 0);
		drep(i, j, n, m) {
			if (gophers[i].dist2(holes[j]) <= v * v * s * s)
				dist[i][j] = -1;
		}
		printf("%d\n", n + hungarian(dist).x);
	}
}

#include <bits/stdc++.h>
#include "point.h"
#include "matching.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n) {
		vector<pti> ants(n), trees(n);
		read(ants);
		read(trees);
		vvd dist = md(n, n, 0);
		drep(i, j, n, n) {
			dist[i][j] = ants[i].dist(trees[j]);
		}

		vi ans = hungarian(dist).y;
		printX("");
		irep(v, ans)
			print("%d", v + 1);
	}
}

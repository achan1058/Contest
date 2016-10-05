#include <bits/stdc++.h>
#include "header.h"

int getDist(pii v0, pii v1) { return abs(v0.x - v1.x) + abs(v0.y - v1.y); }
int main() {
	int N, x, y, n;
	cin >> N;
	rep(X, 0, N) {
		pii st;
		cin >> x >> y >> st.x >> st.y >> n;
		vector<pii> pt(n);
		vi perm(n);
		int minDist = inf;
		rep(i, 0, n)
			perm[i] = i;
		rep(i, 0, n)
			cin >> pt[i].x >> pt[i].y;
		do {
			int curDist = getDist(st, pt[perm[0]]) + getDist(st, pt[perm[n - 1]]);
			rep(i, 0, n - 1)
				curDist += getDist(pt[perm[i]], pt[perm[i + 1]]);
			minDist = min(curDist, minDist);
		} while (next_permutation(all(perm)));
		printf("The shortest path has length %d\n", minDist);
	}
}

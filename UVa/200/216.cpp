#include <bits/stdc++.h>
#include "point.h"
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vector<pti> p(n);
		vi perm(n), ans;
		double best = inf;
		read(p);

		rep(i, 0, n)
			perm[i] = i;
		do {
			double dist = 0;
			rep(i, 1, n)
				dist += p[perm[i]].dist(p[perm[i - 1]]);
			if (dist < best) {
				best = dist;
				ans = perm;
			}
		} while (next_permutation(all(perm)));

		print("**********************************************************");
		print("Network #%d", X);
		rep(i, 1, n)
			print("Cable requirement to connect (%d,%d) to (%d,%d) is %.2f feet.",
				p[ans[i - 1]].x, p[ans[i - 1]].y, p[ans[i]].x, p[ans[i]].y, p[ans[i]].dist(p[ans[i - 1]]) + 16);
		print("Number of feet of cable required is %.2f.", best + 16 * (n - 1));
	}
}

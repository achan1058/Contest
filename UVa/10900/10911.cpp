#include <bits/stdc++.h>
#include "point.h"

int n;
double best, ans = 0;
vb used;
vvd graph;
void backtrack(int d = 0) {
	if (ans > best)
		return;
	if (d == n) {
		best = min(best, ans);
		return;
	}
	rep(i, 0, 2 * n) {
		if (!used[i]) {
			used[i] = true;
			rep(j, i + 1, 2 * n) {
				if (!used[j]) {
					used[j] = true;
					ans += graph[i][j];
					backtrack(d + 1);
					ans -= graph[i][j];
					used[j] = false;
				}
			}
			used[i] = false;
			break;
		}
	}
}

int main() {
	string s;
	whileX(cin >> n && n != 0) {
		vector<ptd> pts(2 * n);
		graph = md(2 * n, 2 * n, 0);
		best = inf;
		used = vb(2 * n);

		irep(p, pts)
			cin >> s >> p;
		rep(i, 0, 2 * n) {
			rep(j, 0, 2 * n)
				graph[i][j] = pts[i].dist(pts[j]);
		}
		backtrack();
		printc("%.2f\n", best);
	}
}

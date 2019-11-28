#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int r, c, n, ans = inf;
		pii st;
		cin >> r >> c >> st.first >> st.second >> n;
		vpii beep(n);
		irep(b, beep)
			cin >> b.first >> b.second;
		beep.pb({ st });
		
		vvi dist = mi(n + 1, n + 1, 0);
		drep(i, j, n + 1, i)
			dist[i][j] = dist[j][i] = abs(beep[i].first - beep[j].first) + abs(beep[i].second - beep[j].second);
		vi perm(n);
		rep(i, 0, n)
			perm[i] = i;

		do {
			int d = dist[n][perm[0]] + dist[n][perm.back()];
			rep(i, 1, n)
				d += dist[perm[i]][perm[i - 1]];
			ans = min(ans, d);
		} while (next_permutation(all(perm)));
		print("The shortest path has length %d", ans);
	}
}

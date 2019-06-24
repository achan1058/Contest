#include <bits/stdc++.h>
#include "header.h"

int main() {
	int f, r;
	while (cin >> f && f != 0) {
		cin >> r;
		vd front(f), rear(r), ratios;
		double ans = 0;
		read(front);
		read(rear);
		drep(i, j, f, r)
			ratios.pb(rear[j] / front[i]);
		sort(all(ratios));
		rep(i, 1, sz(ratios))
			ans = max(ans, ratios[i] / ratios[i - 1]);
		print("%.2f", ans);
	}
}

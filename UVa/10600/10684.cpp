#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	while (cin >> n && n != 0) {
		int cur = 0, best = -inf;
		rep(i, 0, n) {
			cin >> v;
			cur += v;
			best = max(cur, best);
			cur = max(0, cur);
		}
		if (best > 0)
			print("The maximum winning streak is %d.", best);
		else
			print("Losing streak.");
	}
}

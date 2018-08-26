#include <bits/stdc++.h>
#include "fraction.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		fi f = fi(1, n);
		vector<pair<fi, fi>> ans;
		rep(i, n + 1, 2 * n + 1) {
			fi f2 = fi(1, i), f3 = f - f2;
			if (f3.num() == 1)
				ans.pb({ f3, f2 });
		}
		print("%d", ans.size());
		irep(p, ans) {
			print("1/%d = 1/%d + 1/%d", n, p.x.den(), p.y.den());
		}
	}
}

#include <bits/stdc++.h>
#include "fraction.h"
#include "header.h"

int main() {
	int n, d;
	while (cin >> n >> d) {
		vi ans;
		fi f(n, d);
		while (f.den() > 0) {
			ans.pb(f.num() / f.den());
			f -= ans.back();
			f = f.inv();
		}
		printf("[");
		rep(i, 0, sz(ans))
			printf("%d%s", ans[i], i == 0 ? ";" : i == sz(ans) - 1 ? "]\n" : ",");
	}
}

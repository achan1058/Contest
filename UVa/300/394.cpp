#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, b, l, u, d, bs;
	string s, t;
	cin >> n >> k;
	getline(cin, s);
	map<string, int> index;
	vvi low(n), multi(n);

	rep(i, 0, n) {
		getline(cin, s);
		stringstream ss(s);
		ss >> t >> bs >> b >> d;
		index[t] = i;
		rep(j, 0, d) {
			ss >> l >> u;
			low[i].pb(l);
			multi[i].pb(u - l + 1);
		}
		low[i].pb(bs);
		multi[i].pb(b);
	}

	rep(i, 0, k) {
		getline(cin, s);
		stringstream ss(s);
		ss >> t;
		printf("%s[", t.c_str());

		int ind = index[t], ans = 0;
		rep(j, 0, sz(low[ind]) - 1) {
			ss >> b;
			printf("%s%d", j == 0 ? "" : ", ", b);
			ans *= multi[ind][j];
			ans += (b - low[ind][j]);
		}
		ans *= multi[ind].back();
		ans += low[ind].back();
		print("] = %d", ans);
	}
}

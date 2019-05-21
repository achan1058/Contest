#include <bits/stdc++.h>
#include "header.h"

int n;
vector<vvi> ans(17);
vb p(32), used(17);
vi cur = { 1 };
void backtrack() {
	if (sz(cur) == n) {
		if (p[cur.back() + cur[0]])
			ans[n].pb(cur);
		return;
	}

	for (int i = sz(cur) % 2 + 1; i <= n; i += 2) {
		if (used[i] || !p[cur.back() + i])
			continue;
		cur.pb(i);
		used[i] = true;
		backtrack();
		used[i] = false;
		cur.pop_back();
	}
}

int main() {
	p[3] = p[5] = p[7] = p[11] = p[13] = p[17] = p[19] = p[23] = p[29] = p[31] = true;
	used[1] = true;
	whileX(cin >> n) {
		printX("");
		printcn();
		if (n % 2)
			continue;
		if (ans[n].empty())
			backtrack();
		irep(v, ans[n]) {
			rep(i, 0, n)
				printf("%d%c", v[i], i == n - 1 ? '\n' : ' ');
		}
	}
}

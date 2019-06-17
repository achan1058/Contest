#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int v;
	char c;
	vi ans;

	cin >> v;
	ans.pb(v);
	while (cin >> c >> v)
		ans.pb(v);

	sort(all(ans));
	rep(i, 0, sz(ans))
		printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : '+');
}

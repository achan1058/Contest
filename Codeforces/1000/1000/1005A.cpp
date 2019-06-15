#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, prev;
	vi ans;
	cin >> n >> prev;
	rep(i, 1, n) {
		cin >> v;
		if (v == 1)
			ans.pb(prev);
		prev = v;
	}
	ans.pb(prev);
	print(sz(ans));
	print(ans);
}

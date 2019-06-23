#include <bits/stdc++.h>
#include "header.h"

int main() {
	vector<pair<ll, ll>> ans;
	ans.pb({ 0, 1 });
	while (ans.back().first + ans.back().second <= 1ll << 32) {
		ll m = ans.back().first + ans.back().second, f = ans.back().first + 1;
		ans.pb({ m, f });
	}
	int n;
	while (cin >> n && n != -1)
		print(ans[n].first, ans[n].first + ans[n].second);
}

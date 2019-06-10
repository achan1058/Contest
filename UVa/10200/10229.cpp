#include <bits/stdc++.h>
#include "header.h"

int main() {
	int iter = 0, cur = 0, next = 1;
	vi ans = { 0, 1 };
	do {
		ans.pb((ans[sz(ans) - 2] + ans[sz(ans) - 1]) % (1 << 20));
	} while (ans[sz(ans) - 2] != 0 || ans[sz(ans) - 1] != 1);
	ans.pop_back();
	ans.pop_back();
	int n, m;
	while (cin >> n >> m)
		print(ans[n % sz(ans)] % (1 << m));
}

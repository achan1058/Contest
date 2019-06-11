#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi ans;
		int t;
		rep(i, 0, n) {
			cin >> t;
			if (t != 0)
				ans.pb(t);
		}
		print(ans.empty() ? vi(1, 0) : ans);
	}
}

#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	int n;
	string s;
	whileX(cin >> n) {
		mapper<string> mp;
		vi ans(n);
		rep(i, 0, n) {
			cin >> s;
			mp.map(s);
		}
		rep(i, 0, n) {
			int d, k;
			cin >> s >> d >> k;
			int t = mp.map(s);
			rep(i, 0, k) {
				cin >> s;
				ans[t] -= d / k;
				ans[mp.map(s)] += d / k;
			}
		}

		printX();
		rep(i, 0, n)
			print(mp.unmap(i), ans[i]);
	}
}

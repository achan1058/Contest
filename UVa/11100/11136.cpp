#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, v;
	while(cin >> n && n != 0) {
		ll ans = 0;
		multiset<int> urn;
		rep(i, 0, n) {
			cin >> k;
			rep(j, 0, k) {
				cin >> v;
				urn.insert(v);
			}

			auto it1 = urn.begin();
			int mn = *it1;
			urn.erase(it1);

			auto it2 = --urn.end();
			int mx = *it2;
			urn.erase(it2);

			ans += mx - mn;
		}
		print(ans);
	}
}

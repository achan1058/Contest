#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, v;
	while (cin >> n && n != 0) {
		multiset<int> bills;
		ll total = 0;
		for (int i = 0; i < n; i++) {
			cin >> k;
			for (int j = 0; j < k; j++) {
				cin >> v;
				bills.insert(v);
			}

			auto mxt = bills.rbegin();
			total += *mxt;
			mxt++;
			bills.erase(mxt.base());
			auto mnt = bills.begin();
			total -= *mnt;
			bills.erase(mnt);
		}
		printf("%lld\n", total);
	}
}

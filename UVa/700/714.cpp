#include <bits/stdc++.h>
#include "binary_search.h"
#include "header.h"

vl books;
vvl best;
int n, m;
int greedy(ll k) {
	int t = n - 1;
	vvl ans(m);
	rrep(i, m - 1, 0) {
		ll cur = 0;
		if (books[t] > k)
			return -1;
		while (t >= i && cur + books[t] <= k) {
			ans[i].pb(books[t]);
			cur += books[t];
			t--;
		}
	}
	if (t >= 0)
		return -1;
	best = ans;
	return 0;
}

int main() {
	forX() {
		cin >> n >> m;
		best.clear();
		books.resize(n);
		read(books);
		binarySearch(greedy, 0ll, 5000000000ll);
		rep(i, 0, m) {
			reverse(all(best[i]));
			printf(best[i]);
			printf(i == m - 1 ? "\n" : " / ");
		}
	}
}

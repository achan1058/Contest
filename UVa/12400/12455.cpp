#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int l, n, t;
		cin >> l >> n;
		vb poss(l + 1);
		poss[0] = true;
		rep(i, 0, n) {
			cin >> t;
			rrep(j, l, t)
				poss[j] = poss[j] || poss[j - t];
		}
		print("%s", poss[l] ? "YES" : "NO");
	}
}

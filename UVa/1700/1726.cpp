#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, d, l;
		char c;
		cin >> n;
		vi inc(10), cor(10);
		rep(i, 0, n) {
			cin >> d >> l >> c;
			if (l == 1 && c == 'c')
				cor[d - 1]++;
			else if (l == 0 && c == 'i')
				inc[d - 1]++;
		}
		int ans = 0;
		drep(i, j, 10, i)
			ans += inc[j] * cor[i];
		printv(ans);
	}
}

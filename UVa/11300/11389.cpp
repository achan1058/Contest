#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d, r;
	while (cin >> n >> d >> r && (n | d | r) != 0) {
		vi r1(n), r2(n);
		read(r1);
		read(r2);
		sort(all(r1));
		sort(all(r2));
		int over = 0;
		rep(i, 0, n)
			over += max(r1[i] + r2[n - i - 1] - d, 0);
		printd(over * r);
	}
}

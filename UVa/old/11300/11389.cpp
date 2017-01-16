#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d, r;
	while (cin >> n >> d >> r && (n | d | r) != 0) {
		vi morn(n), even(n);
		read(morn);
		read(even);
		sort(all(morn));
		sort(all(even), greater<int>());
		int over = 0;
		rep(i, 0, n)
			over += max(0, morn[i] + even[i] - d);
		printf("%d\n", over * r);
	}
}

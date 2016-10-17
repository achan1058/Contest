#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int r = 0;
		rep(i, 1, n+1)
			r += i * i;
		printf("%d\n", r);
	}
}

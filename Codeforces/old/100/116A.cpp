#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, mx = 0, cur = 0, a, b;
	cin >> n;
	rep(i, 0, n) {
		cin >> a >> b;
		cur += b - a;
		mx = max(mx, cur);
	}
	printf("%d\n", mx);
}

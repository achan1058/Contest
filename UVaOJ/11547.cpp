#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	cin >> n;
	rep(i, 0, n) {
		cin >> m;
		m *= 567;
		m /= 9;
		m += 7492;
		m *= 235;
		m /= 47;
		m -= 498;
		printf("%d\n", abs((m / 10) % 10));
	}
}

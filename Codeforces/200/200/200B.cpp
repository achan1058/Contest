#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	double ans = 0, v;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		ans += v;
	}
	printf("%.12f", ans / n);
}

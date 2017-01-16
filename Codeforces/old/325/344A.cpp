#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 1;
	string prev, s;
	cin >> n >> prev;
	rep(i, 1, n) {
		cin >> s;
		if (s != prev) {
			ans++;
			prev = s;
		}
	}
	printf("%d\n", ans);
}

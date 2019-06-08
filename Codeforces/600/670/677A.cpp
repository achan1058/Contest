#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, h, ans = 0, v;
	cin >> n >> h;
	rep(i, 0, n) {
		cin >> v;
		ans += (v > h ? 2 : 1);
	}
	printv(ans);
}

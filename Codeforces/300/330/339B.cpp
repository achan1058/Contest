#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, cur = 1, v;
	ll ans = 0;
	cin >> n >> m;
	rep(i, 0, m) {
		cin >> v;
		ans += (v - cur + n) % n;
		cur = v;
	}
	print(ans);
}

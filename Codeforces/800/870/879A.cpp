#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, s, d, ans = 0;
	cin >> n;
	rep(i, 0, n) {
		ans++;
		cin >> s >> d;
		if (ans < s)
			ans = s;
		else
			ans = (ans - s + d - 1) / d * d + s;
	}
	print("%d", ans);
}

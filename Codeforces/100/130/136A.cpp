#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	cin >> n;
	vi ans(n);
	rep(i, 0, n) {
		cin >> v;
		ans[v - 1] = i + 1;
	}
	print(ans);
}

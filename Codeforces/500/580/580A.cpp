#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, ans = 1, cur = 1, prev;
	cin >> n >> prev;
	rep(i, 1, n) {
		cin >> v;
		if (v < prev) {
			cur = 1;
		} else {
			cur++;
			ans = max(ans, cur);
		}
		prev = v;
	}
	print(ans);
}

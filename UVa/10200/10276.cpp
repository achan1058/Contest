#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi ans(51);
	ans[1] = 1;
	rep(i, 2, 51)
		ans[i] = ans[i - 1] + (i + 1) / 2 * 2;
	forX() {
		cin >> n;
		print(ans[n]);
	}
}

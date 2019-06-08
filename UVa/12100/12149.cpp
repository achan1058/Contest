#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi ans(101);
	rep(i, 1, 101)
		ans[i] = ans[i - 1] + i * i;
	int n;
	while (cin >> n && n != 0)
		printv(ans[n]);
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi ans(101);
	rep(i, 1, 101)
		ans[i] = ans[i - 1] + i * i;
	while (cin >> n && n != 0)
		printf("%d\n", ans[n]);
}

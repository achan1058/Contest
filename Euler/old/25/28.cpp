#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 1;
	rep(i, 1, 501)
		ans += 4 * (2 * i + 1) * (2 * i + 1) - 12 * i;
	printf("%d\n", ans);
}

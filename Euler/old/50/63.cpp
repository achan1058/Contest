#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0;
	rep(i, 1, 10)
		ans += int(-1 / (log10(i) - 1));
	printf("%d\n", ans);
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int numsafeL[35], numsafe[35], n;
	numsafeL[0] = numsafeL[1] = 1;
	numsafeL[2] = numsafe[1] = 2;
	numsafe[2] = 4;
	rep(i, 3, 31) {
		numsafeL[i] = numsafeL[i - 1] + numsafeL[i - 2] + numsafeL[i - 3];
		numsafe[i] = numsafeL[i] + numsafeL[i - 1] + numsafeL[i - 2];
	}
	while (cin >> n && n != 0)
		printf("%d\n", (1 << n) - numsafe[n]);
}

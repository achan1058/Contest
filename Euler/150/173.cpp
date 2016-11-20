#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n = 1000, ev = n / 2, od = (n + 1) / 2, ans = ev * (ev - 1) / 2 + od * (od - 1) / 2, mn = 2;

	for (int i = n + 1; i < inf; i++) {
		while (i * i - mn * mn > n * n || (i - mn) % 2 != 0)
			mn++;
		if (mn == i)
			break;

		ans += (i - mn) / 2;
	}
	printf("%d\n", ans);
}

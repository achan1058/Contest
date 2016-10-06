#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi ans(31, 0);
	ans[0] = 1;
	for (int i = 2; i <= 30; i++) {
		ans[i] = ans[i - 2];
		for (int j = i - 2; j >= 0; j -= 2)
			ans[i] += ans[j] * 2;
	}
	while (cin >> n && n != -1)
		printf("%d\n", ans[n]);
}

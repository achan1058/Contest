#include <bits/stdc++.h>
#include "header.h"

int n;
vi grid;
vb used;
ll backtrack(int k, int d = 0) {
	ll result = 0;
	if (d + k > n)
		return 0;
	if (d == n || k == 0)
		return 1;
	result += backtrack(k, d + 1);
	for (int i = 0; i < grid[d]; i++) {
		if (!used[i]) {
			used[i] = true;
			result += backtrack(k - 1, d + 1);
			used[i] = false;
		}
	}
	return result;
}

int main() {
	int k;
	while (cin >> n >> k && (n | k) != 0) {
		ll total = 0;
		vl ans(k + 1);
		if (k < 2 * n) {
			if (n % 2 == 1) {
				grid.resize(n);
				used.resize(n);
				for (int i = 0; i < n - 1; i += 2)
					grid[i] = grid[i + 1] = i + 1;
				grid[n - 1] = n;
				for (int i = 0; i <= k; i++)
					ans[i] = backtrack(i);

				n--;
				grid.resize(n);
				used.resize(n);
				for (int i = 0; i < n; i += 2)
					grid[i] = grid[i + 1] = i + 2;
				for (int i = 0; i <= k; i++)
					total += backtrack(i) * ans[k - i];
			} else {
				grid.resize(n);
				used.resize(n - 1);
				for (int i = 0; i < n; i += 2)
					grid[i] = grid[i + 1] = i + 1;
				for (int i = 0; i <= k; i++)
					ans[i] = backtrack(i);
				for (int i = 0; i <= k; i++)
					total += ans[i] * ans[k - i];
			}
		}
		printf("%lld\n", total);
	}
}

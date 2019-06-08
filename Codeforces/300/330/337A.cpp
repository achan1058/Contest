#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, ans = inf;
	cin >> k >> n;
	vi puzzles(n);
	read(puzzles);
	sort(all(puzzles));
	rep(i, 0, n - k + 1)
		ans = min(ans, puzzles[i + k - 1] - puzzles[i]);
	print(ans);
}

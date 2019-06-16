#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, j = 0, ans = 0;
	cin >> n;
	vi v1(n);
	read(v1);
	sort(all(v1));

	cin >> m;
	vi v2(m);
	read(v2);
	sort(all(v2));

	rep(i, 0, n) {
		while (j < m && v2[j] < v1[i] - 1)
			j++;
		if (abs(v1[i] - v2[j]) <= 1) {
			ans++;
			j++;
		}
	}
	print(ans);
}

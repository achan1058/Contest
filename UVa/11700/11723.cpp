#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r, T = 1;
	while (cin >> n >> r && (n | r) != 0) {
		int ans = n / r - (n % r == 0 ? 1 : 0);
		if (ans <= 26)
			printf("Case %d: %d\n", T, ans);
		else
			printf("Case %d: impossible\n", T);
		T++;
	}
}

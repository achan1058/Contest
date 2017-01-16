#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, r;
	whileX(cin >> n >> r && (n | r) != 0) {
		int ans = n / r - (n % r == 0 ? 1 : 0);
		if (ans <= 26)
			printc("%d\n", ans);
		else
			printc("impossible\n");
	}
}

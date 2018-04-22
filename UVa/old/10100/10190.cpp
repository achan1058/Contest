#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (n < 2 || m < 2) {
			printf("Boring!\n");
			continue;
		}
		vi ans;
		while (n % m == 0) {
			ans.pb(n);
			n /= m;
		}
		if (n != 1) {
			printf("Boring!\n");
			continue;
		} else {
			irep(v, ans)
				printf("%d ", v);
			printf("1\n");
		}
	}
}

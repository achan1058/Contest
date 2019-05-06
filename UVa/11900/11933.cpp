#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi ans(2);
		int cur = 0, p = 1;
		while (n > 0) {
			if (n % 2) {
				ans[cur] += p;
				cur = 1 - cur;
				n--;
			}
			n /= 2;
			p *= 2;
		}
		print("%d %d", ans[0], ans[1]);
	}
}

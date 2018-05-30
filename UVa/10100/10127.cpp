#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int t = n, ans = 0;
		while (t != 0) {
			if (t % 10 == 1) {
				ans++;
				t /= 10;
			} else {
				t += n;
			}
		}
		print("%d", ans);
	}
}

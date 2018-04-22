#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int cur = n, ans = 0;
		while (cur != 0) {
			cur += n;
			while (cur % 10 == 1) {
				cur /= 10;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
}

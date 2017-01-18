#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int k, n, total = 0;
		cin >> k >> n;
		vi parties(n);
		read(parties);
		rep(i, 1, k + 1) {
			if (i % 7 == 0 || i % 7 == 6)
				continue;
			irep(p, parties) {
				if (i % p == 0) {
					total++;
					break;
				}
			}
		}
		printf("%d\n", total);
	}
}

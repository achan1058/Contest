#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, p, q, w;
	forX() {
		cin >> n >> p >> q;
		int num = 0, weight = 0;
		rep(i, 0, n) {
			cin >> w;
			if (num < p && w + weight <= q) {
				num++;
				weight += w;
			}
		}
		printc("%d\n", num);
	}
}

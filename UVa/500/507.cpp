#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v, cur = 0, best = -1, left = 0, right = 0, cl = 0;
		cin >> n;
		rep(i, 1, n) {
			cin >> v;
			cur += v;
			if (cur > best || (cur == best && (i - cl > right - left))) {
				best = cur;
				right = i;
				left = cl;
			}
			if (cur < 0) {
				cl = i;
				cur = 0;
			}
		}
		if (best >= 0)
			print("The nicest part of route %d is between stops %d and %d", X, left + 1, right + 1);
		else
			print("Route %d has no nice parts", X);
	}
}

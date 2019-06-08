#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, e = -1, o = -1;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		if (v % 2) {
			if (o == -1)
				o = i + 1;
			else
				o = -2;
		} else {
			if (e == -1)
				e = i + 1;
			else
				e = -2;
		}
	}
	printv(o > 0 ? o : e);
}

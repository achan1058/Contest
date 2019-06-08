#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi squares;
	rep(i, 1, 400)
		squares.pb(i * i);
	int a, b;
	while (cin >> a >> b && (a | b) != 0) {
		auto i1 = lower_bound(all(squares), a);
		auto i2 = upper_bound(all(squares), b);
		printv(i2 - i1);
	}
}

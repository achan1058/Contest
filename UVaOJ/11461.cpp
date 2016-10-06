#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi squares;
	int a, b;
	rep(i, 1, 350)
		squares.pb(i * i);
	while (cin >> a >> b && (a != 0 || b != 0)) {
		auto low = lower_bound(all(squares), a);
		auto high = upper_bound(all(squares), b);
		printf("%d\n", high - low);
	}
}

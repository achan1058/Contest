#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, best = 0, total = 0;
	cin >> n;
	vi val(n);
	read(val);
	irep(v, val) {
		best = max(best, v);
		total += v;
	}
	print(best * n - total);
}

#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0)
		print("%d things taken %d at a time is %lld exactly.", n, m, binom(n, m));
}

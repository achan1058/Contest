#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

ll paths(int n) {
	return binom(2 * n, n);
}

int main() {
	assert(paths(2) == 6);
	printl(paths(20));
}

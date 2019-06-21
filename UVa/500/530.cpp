#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0)
		print(binom(n, k));
}

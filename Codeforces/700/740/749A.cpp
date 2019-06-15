#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	print(n / 2);
	printv(n % 2 ? 3 : 2);
	rep(i, 1, n / 2)
		printf(" %d", 2);
}

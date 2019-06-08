#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	cin >> n >> k;
	rep(i, 0, k) {
		if (n % 10)
			n--;
		else
			n /= 10;
	}
	printv(n);
}

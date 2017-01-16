#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x, k;
	forX() {
		cin >> x >> k;
		int q = x % k, p = k - q;
		printf("%d %d\n", p, q);
	}
}

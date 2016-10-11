#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (gcd(n, m) == 1)
			printf("%10d%10d    Good Choice\n\n", n, m);
		else
			printf("%10d%10d    Bad Choice\n\n", n, m);
	}
}

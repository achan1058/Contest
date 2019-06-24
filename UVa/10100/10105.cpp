#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	int d, n;
	while (cin >> d >> n) {
		vi coeff(n);
		read(coeff);
		print(multinom(coeff));
	}
}

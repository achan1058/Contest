#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	string s1, s2;
	int N;
	cin >> N;
	rep(X, 0, N) {
		cin >> s1 >> s2;
		int i1 = stoi(s1, 0, 2), i2 = stoi(s2, 0, 2);

		if (gcd(i1, i2) == 1)
			printf("Pair #%d: Love is not all you need!\n", X + 1);
		else
			printf("Pair #%d: All you need is love!\n", X + 1);
	}
}

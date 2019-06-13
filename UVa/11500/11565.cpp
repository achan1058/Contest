#include <bits/stdc++.h>
#include "header.h"

bool test(int x, int y, int a, int b, int c) {
	int z = b / x / y;
	return x != y && x != z && y != z && x + y + z == a && x * x + y * y + z * z == c;
}

int main() {
	int a, b, c;
	forX() {
		cin >> a >> b >> c;
		set<int> factors;
		pii sol = { inf, inf };
		for (int i = 1; i * i <= b; i++) {
			if (b % i == 0) {
				factors.insert(i);
				factors.insert(b / i);
			}
		}

		irep(x, factors) {
			irep(y, factors) {
				if ((b / x) % y)
					continue;
				if (pii(-x, -y) < sol && test(-x, -y, a, b, c))
					sol = { -x, -y };
				if (pii(-x, y) < sol && test(-x, y, a, b, c))
					sol = { -x, y };
				if (pii(x, -y) < sol && test(x, -y, a, b, c))
					sol = { x, -y };
				if (pii(x, y) < sol && test(x, y, a, b, c))
					sol = { x, y };
			}
		}

		if (sol == pii(inf, inf))
			print("No solution.");
		else
			print(sol.first, sol.second, b / sol.first / sol.second);
	}
}

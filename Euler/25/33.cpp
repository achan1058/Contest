#include <bits/stdc++.h>
#include "fraction.h"

int main() {
	Fraction<int> prod(1);
	rep(d, 10, 100) {
		rep(n, 10, d) {
			Fraction<int> f(n, d);
			if (n / 10 == d % 10) {
				Fraction<int> f1(n % 10, d / 10);
				if (f == f1)
					prod *= f;
			} else if (n % 10 == d / 10) {
				Fraction<int> f1(n / 10, d % 10);
				if (f == f1)
					prod *= f;
			}
		}
	}

	printf("%d\n", prod.den());
}

#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int b, p, m;
	while (cin >> b >> p >> m) {
		b %= m;
		printf("%d\n", power(b, p, m));
	}
}

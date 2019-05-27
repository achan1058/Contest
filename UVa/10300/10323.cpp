#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	int n;
	vl fact = factorialTable(20);
	while (cin >> n) {
		if (n < 0 && n % 2)
			print("Overflow!");
		else if (n < 0)
			print("Underflow!");
		else if (n > 20 || fact[n] > 6227020800)
			print("Overflow!");
		else if (fact[n] < 10000)
			print("Underflow!");
		else
			print("%lld", fact[n]);
	}
}

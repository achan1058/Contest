#include <bits/stdc++.h>
#include "header.h"

int main() {
	int step, mod;
	while (cin >> step >> mod)
		print("%10d%10d    %s Choice\n", step, mod, gcd(step, mod) == 1 ? "Good" : "Bad");
}

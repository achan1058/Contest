#include <bits/stdc++.h>
#include "number_theory.h"
#include "header.h"

int main() {
	forX() {
		ll x, y, n;
		cin >> x >> y >> n;
		print(powmod(x, y, n));
	}
}

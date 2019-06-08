#include <bits/stdc++.h>
#include "number_theory.h"
#include "header.h"

int main() {
	ll b, p, m;
	while (cin >> b >> p >> m)
		printl(powmod(b, p, m));
}

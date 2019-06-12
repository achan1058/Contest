#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll a, b;
	whileX(cin >> a >> b && (a | b) != 0) {
		a = a * (a - 1) / 2;
		b = b * (b - 1) / 2;
		printc(a * b);
	}
}

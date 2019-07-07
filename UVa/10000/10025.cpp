#include <bits/stdc++.h>
#include "misc.h"
#include "header.h"

int main() {
	ll n;
	forX() {
		cin >> n;
		int t = triangular(abs(n), true);
		if ((t + 1) / 2 % 2 != abs(n) % 2)
			t = (t + 1) / 2 * 2 + 1;
		printX(t == 0 ? 3 : t);
	}
}

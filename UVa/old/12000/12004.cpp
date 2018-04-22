#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll n;
		cin >> n;
		if ((n * n - n) % 4 == 0)
			printc("%lld\n", (n * n - n) / 4);
		else
			printc("%lld/2\n", (n * n - n) / 2);
	}
}

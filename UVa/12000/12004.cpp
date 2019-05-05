#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll n;
		cin >> n;
		ll ans = n * (n - 1) / 2;
		if (ans % 2)
			printc("%lld/2", ans);
		else
			printc("%lld", ans / 2);
	}
}

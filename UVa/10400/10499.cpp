#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n > 0) {
		if (n == 1)
			print("0%%");
		else
			print("%lld%%", n * 25);
	}
}

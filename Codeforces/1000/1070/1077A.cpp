#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll a, b, n;
	forX() {
		cin >> a >> b >> n;
		print((a - b) * (n / 2) + (n % 2 ? a : 0));
	}
}

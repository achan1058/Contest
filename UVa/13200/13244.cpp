#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll n;
		cin >> n;
		ll d = (n + 1) / 2;
		print(d * d + (d - 1) * (d - 1));
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, k;
	cin >> n >> k;
	ll odd = (n + 1) / 2;
	print(k <= odd ? 2 * k - 1 : 2 * (k - odd));
}

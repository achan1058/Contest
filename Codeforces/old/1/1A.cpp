#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	ll ans1 = n / a + (n % a == 0 ? 0 : 1), ans2 = m / a + (m % a == 0 ? 0 : 1);
	printf("%lld\n", ans1 * ans2);
}

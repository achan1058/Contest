#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, k;
	while (cin >> n >> k) {
		ll result = 0, butt = 0;
		while (n > 0) {
			result += n;
			butt += n;
			n = butt / k;
			butt %= k;
		}
		printf("%d\n", result);
	}
}

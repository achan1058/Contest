#include <bits/stdc++.h>
#include "header.h"

int main() {
	priority_queue<ll> small, big;
	ll n;
	while (cin >> n) {
		big.push(-n);
		small.push(-big.top());
		big.pop();
		if (sz(small) >= sz(big) + 2) {
			big.push(-small.top());
			small.pop();
			printf("%lld\n", (small.top() - big.top()) / 2);
		} else {
			printf("%lld\n", small.top());
		}
	}
}

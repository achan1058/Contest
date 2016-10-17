#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	ll v;
	cin >> N;
	rep(X, 0, N) {
		cin >> v;
		printf("%lld\n", v / 2);
	}
}

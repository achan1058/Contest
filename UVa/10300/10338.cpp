#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int N;
	cin >> N;
	rep(X, 1, N + 1) {
		vi count(26);
		string s;
		cin >> s;
		irep(c, s)
			count[c - 'A']++;

		printf("Data set %d: %lld\n", X, multinomial<ll>(count));
	}
}

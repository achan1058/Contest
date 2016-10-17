#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	string s;
	cin >> N;

	rep(X, 1, N + 1) {
		int total = 0;
		cin >> n >> s;
		rep(i, 0, n) {
			if (s[i] == '.') {
				i += 2;
				total += 1;
			}
		}
		printf("Case %d: %d\n", X, total);
	}
}

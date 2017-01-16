#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int n;
	string s, p;
	forX() {
		cin >> s >> n;
		rep(i, 0, n) {
			cin >> p;
			printf("%c\n", sz(kmp(s, p, true)) == 1 ? 'y' : 'n');
		}
	}
}

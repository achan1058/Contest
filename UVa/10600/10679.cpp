#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	forX() {
		string s, p;
		int n;
		cin >> s >> n;
		vi pre = kmp_pre(s);
		rep(i, 0, n) {
			cin >> p;
			printf("%c\n", sz(kmp(s, p, true)) ? 'y' : 'n');
		}
	}
}

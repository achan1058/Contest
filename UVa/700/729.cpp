#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	forX() {
		cin >> n >> k;
		string s(n, '1');
		rep(i, 0, n - k)
			s[i] = '0';

		printX("");
		do {
			printv(s);
		} while (next_permutation(all(s)));
	}
}

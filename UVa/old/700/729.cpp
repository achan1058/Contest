#include <bits/stdc++.h>
#include "header.h"

int main() {
	int h, n;
	forX() {
		printX("");
		cin >> n >> h;
		string s(n, '0');
		rep(i, n - h, n)
			s[i] = '1';
		do {
			printf("%s\n", s.c_str());
		} while (next_permutation(all(s)));
	}
}

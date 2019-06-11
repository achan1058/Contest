#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	forX() {
		int n;
		string s1, s2;
		cin >> s1 >> n;
		rep(i, 0, n) {
			cin >> s2;
			print(kmp(s1, s2, true).empty() ? 'n' : 'y');
		}
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		int n = sqrt(sz(s));
		if (n * n != sz(s)) {
			print("INVALID");
			continue;
		}
		drep(i, j, n, n)
			printv(s[j * n + i]);
		print();
	}
}

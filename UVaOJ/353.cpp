#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		set<string> palin;
		rep(i, 0, sz(s)) {
			rep(j, i + 1, sz(s) + 1) {
				string s2 = s.substr(i, j - i), s3 = s2;
				reverse(all(s3));
				if (s2 == s3)
					palin.insert(s2);
			}
		}
		printf("The string '%s' contains %d palindromes.\n", s.c_str(), sz(palin));
	}
}

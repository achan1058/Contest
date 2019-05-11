#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		set<string> palin;
		drep(j, i, sz(s) + 1, j) {
			string s2 = s.substr(i, j - i), s3 = s2;
			reverse(all(s3));
			if (s2 == s3)
				palin.insert(s2);
		}
		print("The string '%s' contains %d palindromes.", s.c_str(), sz(palin));
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	string ori = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	string rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 0";
	string s;
	map<char, char> m;

	rep(i, 0, sz(ori))
		m[ori[i]] = rev[i];
	while (cin >> s) {
		string r = s;
		reverse(all(r));
		string mir = r;
		irep(ch, mir)
			ch = m[ch];

		if (s == r) {
			if (s == mir)
				printf("%s -- is a mirrored palindrome.\n\n", s.c_str());
			else
				printf("%s -- is a regular palindrome.\n\n", s.c_str());
		} else {
			if (s == mir)
				printf("%s -- is a mirrored string.\n\n", s.c_str());
			else
				printf("%s -- is not a palindrome.\n\n", s.c_str());
		}
	}
}

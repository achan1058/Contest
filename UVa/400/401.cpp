#include <bits/stdc++.h>
#include "header.h"

map<char, char> rev = {
	{ 'A', 'A' },
	{ 'E', '3' },
	{ 'H', 'H' },
	{ 'I', 'I' },
	{ 'J', 'L' },
	{ 'L', 'J' },
	{ 'M', 'M' },
	{ 'O', 'O' },
	{ 'S', '2' },
	{ 'T', 'T' },
	{ 'U', 'U' },
	{ 'V', 'V' },
	{ 'W', 'W' },
	{ 'X', 'X' },
	{ 'Y', 'Y' },
	{ 'Z', '5' },
	{ '1', '1' },
	{ '2', 'S' },
	{ '3', 'E' },
	{ '5', 'Z' },
	{ '8', '8' },
};

bool isPalin(const string& s) {
	string s2 = s;
	reverse(all(s2));
	return s == s2;
}

bool isMirror(const string& s) {
	string s2;
	irep(c, s)
		s2.pb(rev[c]);
	reverse(all(s2));
	return s == s2;
}

int main() {
	string s;
	while (cin >> s) {
		bool palin = isPalin(s);
		bool mirror = isMirror(s);
		if (palin) {
			if (mirror)
				print("%s -- is a mirrored palindrome.\n", s.c_str());
			else
				print("%s -- is a regular palindrome.\n", s.c_str());
		} else {
			if (mirror)
				print("%s -- is a mirrored string.\n", s.c_str());
			else
				print("%s -- is not a palindrome.\n", s.c_str());
		}
	}
}

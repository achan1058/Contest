#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, char> mirror = {
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
		{ '8', '8' }
	};
	string s;
	while (cin >> s) {
		string s2 = s, s3;
		reverse(all(s2));
		irep(c, s2)
			s3 += mirror[c];
		if (s == s2) {
			if (s == s3)
				printf("%s -- is a mirrored palindrome.\n\n", s.c_str());
			else
				printf("%s -- is a regular palindrome.\n\n", s.c_str());
		} else {
			if (s == s3)
				printf("%s -- is a mirrored string.\n\n", s.c_str());
			else
				printf("%s -- is not a palindrome.\n\n", s.c_str());
		}
	}
}

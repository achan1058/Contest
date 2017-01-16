#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		cin >> s;
		if (sz(s) <= 10)
			printf("%s\n", s.c_str());
		else
			printf("%c%d%c\n", s[0], sz(s) - 2, s.back());
	}
}

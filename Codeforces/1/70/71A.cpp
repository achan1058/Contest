#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		if (sz(s) <= 10)
			prints(s);
		else
			print("%c%d%c", s[0], sz(s) - 2, s.back());
	}
}

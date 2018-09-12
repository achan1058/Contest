#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		bool even = false;
		int check = 0;
		getline(cin, s);
		rrep(i, sz(s) - 1, 0) {
			if (s[i] < '0' || s[i] > '9')
				continue;
			if (even) {
				int t = 2 * (s[i] - '0');
				if (t >= 10)
					t -= 9;
				check += t;
			} else {
				check += s[i] - '0';
			}
			even = !even;
		}
		print("%s", check % 10 ? "Invalid" : "Valid");
	}
}

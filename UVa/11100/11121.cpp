#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		int p = 1;
		string s;
		while (n != 0) {
			if (n % (2 * p)) {
				n -= p;
				s += '1';
			} else {
				s += '0';
			}
			p *= -2;
		}
		if (s == "")
			s = "0";

		reverse(all(s));
		printp("%s", s.c_str());
	}
}

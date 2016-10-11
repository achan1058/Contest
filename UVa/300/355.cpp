#include <bits/stdc++.h>
#include "bases.h"

int main() {
	int b1, b2;
	string s;
	while (cin >> b1 >> b2 >> s) {
		if (minBase(s) > b1) {
			printf("%s is an illegal base %d number\n", s.c_str(), b1);
		} else {
			ll val = stoll(s, 0, b1);
			printf("%s base %d = %s base %d\n", s.c_str(), b1, intToString(val, b2).c_str(), b2);
		}
	}
}

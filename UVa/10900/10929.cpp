#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "0") {
		int count = 0, m = 1;
		irep(c, s) {
			count += m * (c - '0');
			m *= -1;
		}
		printf("%s is %sa multiple of 11.\n", s.c_str(), count % 11 == 0 ? "" : "not ");
	}
}

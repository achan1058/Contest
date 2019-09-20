#include <bits/stdc++.h>
#include "dp_algs.h"
#include "utils.h"
#include "header.h"

int main() {
	string s1, s2;
	whileX(getline(cin, s1) && getline(cin, s2)) {
		if (s1 == "" || s2 == "") {
			print("%2d. Blank!", X);
			continue;
		}
		vs t1 = tokenize(s1, [](int c)->int { return !isalnum(c); });
		vs t2 = tokenize(s2, [](int c)->int { return !isalnum(c); });
		print("%2d. Length of longest match: %d", X, sz(lcs(t1, t2).first));
	}
}

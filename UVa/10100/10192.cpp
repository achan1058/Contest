#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s1, s2;
	whileX(getline(cin, s1) && getline(cin, s2) && s1[0] != '#') {
		int output = sz(lcs(s1, s2));
		printp("you can visit at most %d cities.\n", output);
	}
}

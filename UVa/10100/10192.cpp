#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s1, s2;
	whileX(getline(cin, s1) && s1[0] != '#') {
		getline(cin, s2);
		printp("you can visit at most %d cities.", sz(lcs(s1, s2).f));
	}
}

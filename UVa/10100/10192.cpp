#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s1, s2;
	int X = 1;
	while (getline(cin, s1) && getline(cin, s2) && s1[0] != '#') {
		vector<char> t1(all(s1)), t2(all(s2));
		int output = sz(lcs(t1, t2));
		printp("you can visit at most %d cities.\n", output);
		X++;
	}
}

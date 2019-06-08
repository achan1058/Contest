#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		string s2 = s;
		reverse(all(s2));
		printv(sz(lcs(s, s2).first));
	}
}

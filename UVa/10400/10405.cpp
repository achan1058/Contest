#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		print("%d", sz(lcs(s1, s2).f));
	}
}

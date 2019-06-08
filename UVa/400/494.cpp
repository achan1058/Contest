#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		printv(sz(tokenize(s, [](int c)->int { return !isalpha(c); })));
	}
}

#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		printf("%d\n", sz(tokens(s, [](int c)->int { return !isalpha(c); })));
	}
}

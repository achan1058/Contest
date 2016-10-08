#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s;
	while (getline(cin, s) && s != ".")
		printf("%d\n", sz(s) / kmp(s + s, s)[1]);
}

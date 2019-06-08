#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != ".")
		print(sz(s) / kmp(s + s, s)[1]);
}

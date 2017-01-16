#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		printf("%d\n", sz(lcs(s1, s2)));
	}
}

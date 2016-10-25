#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s1;
	forX() {
		getline(cin, s1);
		string s2 = s1;
		reverse(all(s2));
		printf("%d\n", sz(lcs(s1, s2)));
	}
}

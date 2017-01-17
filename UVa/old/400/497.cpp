#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s;
	forX() {
		vi missiles;
		lineX();
		while (getline(cin, s) && s != "")
			missiles.pb(stoi(s));

		vi result = lis(missiles);
		printX("Max hits: %d\n", sz(result));
		irep(v, result)
			printf("%d\n", v);
	}
}

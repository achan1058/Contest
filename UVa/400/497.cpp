#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s;
	forX(true) {
		vi nums;
		while (getline(cin, s) && s != "")
			nums.pb(stoi(s));

		vi ans = lis(nums).first;
		printX("Max hits: %d", sz(ans));
		print(ans, true);
	}
}

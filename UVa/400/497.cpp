#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s;
	forX() {
		if (X == 1)
			getline(cin, s);
		vi nums;
		while (getline(cin, s) && s != "")
			nums.pb(stoi(s));

		vi ans = lis(nums).first;
		printX("Max hits: %d\n", sz(ans));
		irep(n, ans)
			print("%d", n);
	}
}

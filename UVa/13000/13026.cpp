#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vs nums(n);
		read(nums);
		string s;
		cin >> s;

		printcn();
		irep(v, nums) {
			int diff = 0;
			rep(i, 0, sz(s)) {
				if (s[i] != v[i])
					diff++;
			}

			if (diff <= 1)
				printv(v);
		}
	}
}

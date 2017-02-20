#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v1, v2;
		cin >> n;
		string ans(n, ' ');

		irep(c, ans) {
			cin >> v1 >> v2;
			c = v1 + v2 + '0';
		}

		rrep(i, n - 1, 0) {
			if (ans[i] > '9') {
				ans[i] -= 10;
				ans[i - 1]++;
			}
		}

		printX("%s\n", ans.c_str());
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		if (n <= 1) {
			printv(n);
			continue;
		}
		string ans;
		rrep(i, 9, 2) {
			while (n % i == 0) {
				n /= i;
				ans += i + '0';
			}
		}
		if (n != 1) {
			print("-1");
			continue;
		}

		reverse(all(ans));
		prints(ans);
	}
}

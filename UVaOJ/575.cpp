#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "0") {
		int result = 0, power = 1;
		rrep(i, sz(s) - 1, 0) {
			result += power * (s[i] - '0');
			power = 2 * power + 1;
		}
		printf("%d\n", result);
	}
}

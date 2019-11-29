#include <bits/stdc++.h>
#include "bases.h"
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		int ans = minBase(s, true);
		for (; ans <= 62; ans++) {
			int t = 0;
			irep(c, s)
				t += stringToInt<int>(string(1, c), ans);
			if (t % (ans - 1) == 0) {
				print(ans);
				break;
			}
		}
		if (ans == 63)
			print("such number is impossible!");
	}
}

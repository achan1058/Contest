#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		string ans;
		if (s[0] >= '0' && s[0] <= '9') {
			int t = 0;
			reverse(all(s));
			irep(c, s) {
				t *= 10;
				t += c - '0';
				if (t >= 20) {
					ans.pb(t);
					t = 0;
				}
			}
		} else {
			irep(c, s)
				ans += to_string(c);
			reverse(all(ans));
		}
		prints(ans);
	}
}

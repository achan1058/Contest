#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		map<char, string> m;
		string ans;
		int cur = 1;
		irep(c, s) {
			if (m[c] == "") {
				m[c] = to_string(cur);
				cur++;
			}
			ans += m[c];
		}
		irep(c, ans) {
			if (c == '2')
				c = '5';
			else if (c == '5')
				c = '2';
			else if (c == '6')
				c = '9';
			else if (c == '9')
				c = '6';
		}
		printv(ans);
	}
}

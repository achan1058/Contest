#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		int next = 1;
		map<char, string> digit;
		string ans;
		irep(c, s) {
			if (digit[c] == "") {
				digit[c] = to_string(next);
				next++;
			}
			ans += digit[c];
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
		printf("%s\n", ans.c_str());
	}
}

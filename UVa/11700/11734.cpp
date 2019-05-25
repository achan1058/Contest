#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		if (s1 == s2) {
			printc("Yes");
			continue;
		}

		int t = 0;
		bool good = true;
		irep(c, s1) {
			if (t < sz(s2) && c == s2[t]) {
				t++;
			} else if (c != ' ') {
				good = false;
				break;
			}
		}
		if (good && t == sz(s2))
			printc("Output Format Error");
		else
			printc("Wrong Answer");
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, t;
	while (cin >> s >> t) {
		int sind = 0, tind = 0;
		while (sind < sz(s) && tind < sz(t)) {
			if (s[sind] == t[tind])
				sind++;
			tind++;
		}
		printf("%s\n", sind == sz(s) ? "Yes" : "No");
	}
}

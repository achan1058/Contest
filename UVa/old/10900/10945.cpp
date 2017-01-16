#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "DONE") {
		string t, u;
		rep(i, 0, sz(s)) {
			if (isalpha(s[i]))
				t.pb(tolower(s[i]));
		}

		u = t;
		reverse(all(u));
		if (t == u)
			printf("You won't be eaten!\n");
		else
			printf("Uh oh..\n");
	}
}

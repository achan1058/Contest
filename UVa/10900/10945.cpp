#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "DONE") {
		string s1;
		irep(c, s) {
			if (isalpha(c))
				s1.pb(tolower(c));
		}
		string s2 = s1;
		reverse(all(s2));
		print("%s", s1 == s2 ? "You won't be eaten!" : "Uh oh..");
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		vs ans;
		while (ss >> s) {
			reverse(all(s));
			ans.pb(s);
		}
		print(ans);
	}
}

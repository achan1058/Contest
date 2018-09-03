#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		vs ans = tokenize(s);
		bool first = true;
		irep(a, ans) {
			reverse(all(a));
			printf("%s%s", first ? "" : " ", a.c_str());
			first = false;
		}
		print("");
	}
}

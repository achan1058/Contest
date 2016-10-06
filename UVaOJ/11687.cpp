#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "END") {
		if (s == "1")
			printf("1\n");
		else if (sz(s) == 1)
			printf("2\n");
		else if (sz(s) < 10)
			printf("3\n");
		else
			printf("4\n");
	}
}

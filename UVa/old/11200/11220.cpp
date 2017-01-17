#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		lineX();
		printX("");
		printpn();
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			for (int t = 0; ss >> s; t++) {
				if (t < sz(s))
					printf("%c", s[t]);
				else
					t--;
			}
			printf("\n");
		}
	}
}

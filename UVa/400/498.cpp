#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		stringstream ss1(s1), ss2(s2);
		vl coeff;
		bool fs = true;
		while(ss1 >> s1)
			coeff.pb(stoll(s1));
		while (ss2 >> s2) {
			ll result = 0, x = stoll(s2);
			irep(v, coeff) {
				result *= x;
				result += v;
			}
			printf("%s%lld", fs ? "" : " ", result);
			fs = false;
		}
		printf("\n");
	}
}

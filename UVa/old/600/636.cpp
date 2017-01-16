#include <bits/stdc++.h>
#include "bases.h"

int main() {
	string s;
	while (cin >> s && s != "0") {
		int b = minBase(s);
		rep(i, b, 101) {
			int dec = stringToInt<int>(s, i);
			int rt = int(sqrt(dec) + eps);
			if (rt * rt == dec) {
				printf("%d\n", i);
				break;
			}
		}
	}
}

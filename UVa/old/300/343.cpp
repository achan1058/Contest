#include <bits/stdc++.h>
#include "bases.h"

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int b1 = minBase(s1), b2 = minBase(s2);
		ll val1 = stringToInt<ll>(s1, b1), val2 = stringToInt<ll>(s2, b2);
		while (b1 <= 36 && b2 <= 36 && val1 != val2) {
			if (val1 < val2) {
				b1++;
				val1 = stringToInt<ll>(s1, b1);
			} else {
				b2++;
				val2 = stringToInt<ll>(s2, b2);
			}
		}

		if (b1 > 36 || b2 > 36)
			printf("%s is not equal to %s in any base 2..36\n", s1.c_str(), s2.c_str());
		else
			printf("%s (base %d) = %s (base %d)\n", s1.c_str(), b1, s2.c_str(), b2);
	}
}

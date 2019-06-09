#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	char c;
	while (cin >> s1 >> c >> s2) {
		ll i1 = INT_MAX + 1ll, i2 = INT_MAX + 1ll, result;
		int t1 = 0, t2 = 0;
		while (t1 < sz(s1) - 1 && s1[t1] == '0')
			t1++;
		while (t2 < sz(s2) - 1 && s2[t2] == '0')
			t2++;
		if (sz(s1.substr(t1)) <= 10)
			i1 = min(i1, stoll(s1.substr(t1)));
		if (sz(s2.substr(t2)) <= 10)
			i2 = min(i2, stoll(s2.substr(t2)));
		if (c == '+')
			result = i1 + i2;
		else
			result = i1 * i2;

		print(s1, c, s2);
		if (i1 > INT_MAX)
			print("first number too big");
		if (i2 > INT_MAX)
			print("second number too big");
		if (result > INT_MAX)
			print("result too big");
	}
}

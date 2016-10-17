#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		string s2 = s;
		sort(all(s));
		sort(s2.rbegin(), s2.rend());
		int i = 0;
		while (s[i] == '0')
			i++;
		swap(s[i], s[0]);
		ll n1 = stoll(s), n2 = stoll(s2);
		printf("%lld - %lld = %lld = 9 * %lld\n", n2, n1, n2 - n1, (n2 - n1) / 9);
	}
}

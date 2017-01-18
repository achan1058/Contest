#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		map<char, int> mp;
		string s;
		cin >> s;
		irep(c, s)
			mp[c]++;
		printf("%d\n", min(min(min(min(min(mp['M'], mp['A'] / 3), mp['G']), mp['R'] / 2), mp['I']), mp['T']));
	}
}

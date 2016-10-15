#include <bits/stdc++.h>
#include "header.h"

int love_score(const string& s) {
	int n = 0;
	fori(c, s) {
		if (isalpha(c))
			n += tolower(c) - 'a' + 1;
	}
	if (n % 9 == 0 && n > 0)
		return 9;
	return n % 9;
}

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		int l1 = love_score(s1), l2 = love_score(s2);
		if (l1 > l2)
			swap(l1, l2);
		printf("%.2f %%\n", double(l1*100.) / l2);
	}
}

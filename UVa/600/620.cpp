#include <bits/stdc++.h>
#include "header.h"

bool isgood(const string& s, int begin, int end) {
	if (end - begin == 1 && s[begin] == 'A')
		return true;
	else if (end - begin < 3)
		return false;
	else if (s[end - 1] == 'A')
		return isgood(s, begin + 1, end - 1);
	else
		return isgood(s, begin, end - 2);
}

int main() {
	string s;
	forX() {
		cin >> s;
		if (!isgood(s, 0, sz(s)))
			printf("MUTANT\n");
		else if (sz(s) == 1)
			printf("SIMPLE\n");
		else if (s.back() == 'B')
			printf("FULLY-GROWN\n");
		else
			printf("MUTAGENIC\n");
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	char c;
	set<char> s;
	while (cin >> c >> c && c != '}')
		s.insert(c);
	print(sz(s));
}

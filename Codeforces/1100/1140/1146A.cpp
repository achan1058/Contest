#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	int a = 0;
	irep(c, s)
		a += c == 'a' ? 1 : 0;
	print(min(2 * a - 1, sz(s)));
}

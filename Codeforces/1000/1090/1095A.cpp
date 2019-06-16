#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; t < sz(s); i++, t += i)
		printv(s[t]);
	print();
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	bitset<100> b1(s1), b2(s2);
	printf("%s\n", (b1 ^ b2).to_string().substr(100 - sz(s1)).c_str());
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		string s = bitset<32>(n).to_string();
		s = s.substr(s.find('1'));
		printf("The parity of %s is %d (mod 2).\n", s.c_str(), bits(n));
	}
}

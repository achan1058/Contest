#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char c;
		string s1, s2;
		cin >> s1 >> c >> s2;
		int v1 = stoi(s1, 0, 16), v2 = stoi(s2, 0, 16), ans;
		if (c == '+')
			ans = v1 + v2;
		else
			ans = v1 - v2;

		print(bitset<13>(v1).to_string(), c, bitset<13>(v2).to_string(), '=', ans);
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		int iter = 0;
		while (true) {
			string s2 = s;
			reverse(all(s2));
			if (s2 == s)
				break;
			s = to_string(stoll(s) + stoll(s2));
			iter++;
		}
		print("%d %s", iter, s.c_str());
	}
}

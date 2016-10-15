#include <bits/stdc++.h>
#include "header.h"

string phone = "22233344455566677778889999";
int main() {
	string s;
	while (cin >> s) {
		fori(c, s) {
			if (isalpha(c))
				c = phone[c - 'A'];
		}
		printf("%s\n", s.c_str());
	}
}

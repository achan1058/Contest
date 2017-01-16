#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	forX() {
		getline(cin, s1);
		getline(cin, s2);
		if (s1 == s2) {
			printc("Yes\n");
			continue;
		}
		s1.erase(remove(all(s1), ' '), s1.end());
		s2.erase(remove(all(s2), ' '), s2.end());
		printc("%s\n", s1 == s2 ? "Output Format Error" : "Wrong Answer");
	}
}

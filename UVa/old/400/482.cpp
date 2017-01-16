#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	forX() {
		getline(cin, s1);
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss1(s1), ss2(s2);
		map<int, string> out;
		while (ss1 >> s1 && ss2 >> s2)
			out[stoi(s1)] = s2;

		printX("");
		irep(v, out)
			printf("%s\n", v.y.c_str());
	}
}

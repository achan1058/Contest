#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int males = 0, count = 0;
		while (ss >> s) {
			if (s == "MM")
				males++;
			else if (s == "FF")
				males--;
			count++;
		}
		print(males == 0 && count >= 2 ? "LOOP" : "NO LOOP");
	}
}

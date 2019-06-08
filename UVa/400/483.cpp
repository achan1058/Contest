#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		bool first = true;
		while (ss >> s) {
			reverse(all(s));
			printf("%s%s", first ? "" : " ", s.c_str());
			first = false;
		}
		print();
	}
}

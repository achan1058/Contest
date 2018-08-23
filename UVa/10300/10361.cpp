#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		int t = s1.find('<');
		string v1 = s1.substr(0, t);
		s1 = s1.substr(t + 1);

		t = s1.find('>');
		string v2 = s1.substr(0, t);
		s1 = s1.substr(t + 1);

		t = s1.find('<');
		string v3 = s1.substr(0, t);
		s1 = s1.substr(t + 1);

		t = s1.find('>');
		string v4 = s1.substr(0, t);
		string v5 = s1.substr(t + 1);

		print("%s%s%s%s%s", v1.c_str(), v2.c_str(), v3.c_str(), v4.c_str(), v5.c_str());
		print("%s%s%s%s%s", s2.substr(0, sz(s2) - 3).c_str(), v4.c_str(), v3.c_str(), v2.c_str(), v5.c_str());
	}
}

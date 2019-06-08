#include <bits/stdc++.h>
#include "header.h"

int main() {
	unordered_map<string, string> dict;
	string s;
	while (getline(cin, s) && s != "") {
		string s1, s2;
		stringstream ss(s);
		ss >> s1 >> s2;
		dict[s2] = s1;
	}
	while (cin >> s) {
		if (dict[s].empty())
			print("eh");
		else
			prints(dict[s]);
	}
}

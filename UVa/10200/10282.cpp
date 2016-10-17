#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, s1, s2;
	map<string, string> dict;
	while (getline(cin, s) && s != "") {
		stringstream ss;
		ss << s;
		ss >> s1 >> s2;
		dict[s2] = s1;
	}
	while (cin >> s) {
		auto it = dict.find(s);
		if (it == dict.end())
			printf("eh\n");
		else
			printf("%s\n", it->second.c_str());
	}
}

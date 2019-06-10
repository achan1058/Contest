#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, int> conquests;
	forX() {
		string s;
		getline(cin, s);
		stringstream ss(s);
		ss >> s;
		conquests[s]++;
	}
	irep(con, conquests)
		print(con.first, con.second);
}

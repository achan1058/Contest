#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	set<char> st;
	cin >> s;
	irep(c, s)
		st.insert(c);
	print(sz(st) % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}

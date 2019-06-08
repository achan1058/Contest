#include <bits/stdc++.h>
#include "header.h"

map<string, string> gems = {
	{"purple", "Power"},
	{"green", "Time"},
	{"blue", "Space"},
	{"orange", "Soul"},
	{"red", "Reality"},
	{"yellow", "Mind"},
};

int main() {
	int n;
	cin >> n;
	string s;
	map<string, string> ans = gems;
	rep(i, 0, n) {
		cin >> s;
		ans.erase(s);
	}
	print(sz(ans));
	irep(a, ans)
		print(a.second);
}

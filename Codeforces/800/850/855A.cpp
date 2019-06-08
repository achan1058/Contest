#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	set<string> used;
	string s;
	rep(i, 0, n) {
		cin >> s;
		print(used.find(s) == used.end() ? "NO" : "YES");
		used.insert(s);
	}
}

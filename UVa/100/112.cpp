#include <bits/stdc++.h>
#include "header.h"

int n;
bool good;
bool recurse(int cur = 0) {
	int t;
	char c;
	if (!(cin >> c >> t)) {
		cin.clear();
		cin >> c;
		return true;
	}

	cur += t;
	bool leaf = recurse(cur);
	if (recurse(cur) && leaf && cur == n)
		good = true;

	cin >> c;
	return false;
}

int main() {
	while (cin >> n) {
		good = false;
		recurse();
		printf("%s\n", good ? "yes" : "no");
	}
}

#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		vs v1 = tokenize(s1), v2 = tokenize(s2);
		unordered_set<string> o1(all(v1)), o2(all(v2));
		int ans = 0;
		irep(s, o1) {
			if (o2.find(s) != o2.end())
				ans++;
		}

		if (ans == sz(v1) && ans == sz(v2))
			print("A equals B");
		else if (ans == sz(v1))
			print("A is a proper subset of B");
		else if (ans == sz(v2))
			print("B is a proper subset of A");
		else if (ans == 0)
			print("A and B are disjoint");
		else
			print("I'm confused!");
	}
}

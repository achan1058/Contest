#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, string> ans;
	string s1, s2;
	{
		forX() {
			getline(cin, s1);
			getline(cin, s2);
			ans[s1] = s2;
		}
	}
	forX() {
		getline(cin, s1);
		print(ans[s1]);
	}
}

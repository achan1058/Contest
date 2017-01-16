#include <bits/stdc++.h>
#include "header.h"

int main() {
	stack<string> dreams;
	string s;
	forX() {
		cin >> s;
		if (s == "Sleep") {
			cin >> s;
			dreams.push(s);
		} else if (s == "Test") {
			if (dreams.empty())
				printf("Not in a dream\n");
			else
				printf("%s\n", dreams.top().c_str());
		} else if (!dreams.empty()) {
			dreams.pop();
		}
	}
}

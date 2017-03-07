#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	stack<string> dream;
	string s;
	rep(i, 0, n) {
		cin >> s;
		if (s == "Sleep") {
			cin >> s;
			dream.push(s);
		} else if (s == "Kick") {
			if (!dream.empty())
				dream.pop();
		} else if (dream.empty()) {
			printf("Not in a dream\n");
		} else {
			printf("%s\n", dream.top().c_str());
		}
	}
}

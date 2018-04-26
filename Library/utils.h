#pragma once
#include <bits/stdc++.h>
using namespace std;

// test include_empty = true
vector<string> tokenize(const string& s, int(tokenFunc)(int) = isspace, bool include_empty = false) {
	vector<string> result;
	int front = 0;
	for (int i = 0; i <= int(s.size()); i++) {
		if (i == s.size() || tokenFunc(s[i])) {
			if (include_empty || i != front)
				result.push_back(s.substr(front, i - front));
			front = i + 1;
		}
	}
	return result;
}

#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

vi rd(int n, const string& s) {
	vi nums(n);
	stringstream ss(s);
	rep(i, 0, n) {
		int v;
		ss >> v;
		nums[v - 1] = i;
	}
	return nums;
}

int main() {
	int n;
	string s;
	vi ans, guess;
	while (getline(cin, s)) {
		if (s.find(' ') == string::npos) {
			n = stoi(s);
			getline(cin, s);
			ans = rd(n, s);
			continue;
		}
		guess = rd(n, s);
		print(sz(lcs(guess, ans).first));
	}
}

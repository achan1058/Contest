#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	int N;
	cin >> N;
	getline(cin, s1);
	rep(X, 1, N + 1) {
		getline(cin, s1);
		getline(cin, s2);
		printf("Case %d: ", X);

		if (s1 == s2) {
			printf("Yes\n");
			continue;
		}
		s1.erase(remove(all(s1), ' '), s1.end());
		s2.erase(remove(all(s2), ' '), s2.end());
		printf("%s\n", s1 == s2 ? "Output Format Error" : "Wrong Answer");
	}
}

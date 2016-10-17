#include <bits/stdc++.h>
#include "header.h"

inline int ind(int n, int i, int j) {
	return n * i + j;
}

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	for (int X = 1; X <= N; X++) {
		getline(cin, s);
		string s2;
		for (char c : s) {
			if (isalpha(c))
				s2.push_back(c);
		}
		int n = int(sqrt(sz(s2)));
		if (n * n != sz(s2))
			n = -1;
		for (int i = 0; i < (n + 1) / 2; i++) {
			for (int j = 0; j < (n + 1) / 2; j++) {
				if (s2[ind(n, i, j)] != s2[ind(n, j, i)] ||
					s2[ind(n, i, j)] != s2[ind(n, n - i - 1, n - j - 1)] ||
					s2[ind(n, i, j)] != s2[ind(n, n - j - 1, n - i - 1)]) {
					n = -1;
					goto end;
				}
			}
		}
	end:;
		printf("Case #%d:\n", X);
		if (n == -1)
			printf("No magic :(\n");
		else
			printf("%d\n", n);
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		string s;
		cin >> s;
		int b1 = stoi(s), b2 = stoi(s, 0, 16);
		printf("%d %d\n", bits(b1), bits(b2));
	}
}

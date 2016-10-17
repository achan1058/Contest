#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s;
	cin >> N;
	getline(cin, s);
	for (int X = 0; X < N; X++) {
		getline(cin, s);
		int m = 0, f = 0;
		for (char c : s) {
			if (c == 'M')
				m++;
			else if (c == 'F')
				f++;
		}
		printf("%sLOOP\n", m > 1 && m == f ? "" : "NO ");
	}
}

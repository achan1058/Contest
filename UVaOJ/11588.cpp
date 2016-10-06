#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, r, c, m, n;
	char ch;
	cin >> N;
	for (int X = 1; X <= N; X++) {
		vi freq(26);
		int mx = 0;
		cin >> r >> c >> m >> n;
		for (int i = 0; i < r * c; i++) {
			cin >> ch;
			freq[ch - 'A']++;
			mx = max(mx, freq[ch - 'A']);
		}

		int a = 0, b = 0;
		for (int i = 0; i < 26; i++) {
			if (freq[i] == mx)
				a += freq[i];
			else
				b += freq[i];
		}

		printf("Case %d: %d\n", X, a * m + b * n);
	}
}

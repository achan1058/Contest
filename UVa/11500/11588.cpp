#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c, m, n;
	char ch;
	forX() {
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

		printc("%d\n", a * m + b * n);
	}
}

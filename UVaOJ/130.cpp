#include <bits/stdc++.h>
#include "header.h"

int find(const vi& ppl, int i, int k) {
	int n = sz(ppl);
	while (ppl[i] == -1)
		i = (i + 1) % n;
	for (int j = 1; j < k; j++) {
		i = (i + 1) % n;
		while (ppl[i] == -1)
			i = (i + 1) % n;
	}
	return i;
}

int round(vi& ppl, int i, int k) {
	int t = find(ppl, i, k);
	ppl[t] = -1;
	int t2 = find(ppl, t, k);
	ppl[t] = ppl[t2];
	ppl[t2] = -1;
	return (t + 1) % sz(ppl);
}

int main() {
	int n, k;
	while (cin >> n >> k && (n | k) != 0) {
		vi ppl(n);
		for (int i = 0; i < n; i++)
			ppl[i] = i + 1;

		int cur = 0, survivor = -1;
		for (int i = 0; i < n - 1; i++)
			cur = round(ppl, cur, k);
		for (int i = 0; i < n; i++) {
			if (ppl[i] != -1)
				survivor = ppl[i];
		}
		printf("%d\n", (n - survivor + 1) % n + 1);
	}
}

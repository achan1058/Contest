#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		vs words(n);
		read(words);
		string ans(k, ' ');
		int total = 0;

		rep(j, 0, k) {
			map<char, int> count;
			rep(i, 0, n)
				count[words[i][j]]++;
			int best = 0;
			irep(p, count) {
				if (p.second > best) {
					best = p.second;
					ans[j] = p.first;
				}
			}
			total += n - best;
		}
		prints(ans);
		printv(total);
	}
}

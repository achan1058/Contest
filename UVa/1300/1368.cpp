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
				if (p.y > best) {
					best = p.y;
					ans[j] = p.x;
				}
			}
			total += n - best;
		}
		print("%s", ans.c_str());
		print("%d", total);
	}
}
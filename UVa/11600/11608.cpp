#include <bits/stdc++.h>
#include "header.h"

int main() {
	int p;
	whileX(cin >> p && p >= 0) {
		vi prob(12);
		read(prob);
		int n;
		printc();

		rep(i, 0, 12) {
			cin >> n;
			if (p >= n) {
				print("No problem! :D");
				p -= n;
			} else {
				print("No problem. :(");
			}
			p += prob[i];
		}
	}
}

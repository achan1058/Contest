#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X = 1, s;
	while(cin >> s && s >= 0) {
		printf("Case %d:\n", X);
		vi prob(12), req(12);
		irep(p, prob)
			cin >> p;
		irep(p, req)
			cin >> p;
		rep(i, 0, 12) {
			if (s >= req[i]) {
				printf("No problem! :D\n");
				s -= req[i];
			} else {
				printf("No problem. :(\n");
			}
			s += prob[i];
		}
		X++;
	}
}

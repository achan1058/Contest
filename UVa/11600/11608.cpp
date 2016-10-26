#include <bits/stdc++.h>
#include "header.h"

int main() {
	int s;
	whileX(cin >> s && s >= 0) {
		printcn();
		vi prob(12), req(12);
		read(prob);
		read(req);
		rep(i, 0, 12) {
			if (s >= req[i]) {
				printf("No problem! :D\n");
				s -= req[i];
			} else {
				printf("No problem. :(\n");
			}
			s += prob[i];
		}
	}
}

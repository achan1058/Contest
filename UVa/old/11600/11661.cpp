#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	while (cin >> n >> s && n != 0) {
		int pr = -inf, pd = -inf, dist = inf;
		rep(i, 0, n) {
			if (s[i] == 'Z') {
				dist = 0;
				break;
			} else if (s[i] == 'R') {
				pr = i;
				dist = min(dist, abs(pr - pd));
			} else if (s[i] == 'D') {
				pd = i;
				dist = min(dist, abs(pr - pd));
			}
		}
		printf("%d\n", dist);
	}
}

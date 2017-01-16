#include <bits/stdc++.h>
#include "header.h"

int main() {
	int longest = 0, ans = 0;
	rep(d, 2, 1000) {
		vi rem(d);
		int cur = 1, index = 1;
		while (rem[cur] == 0) {
			rem[cur] = index;
			index++;
			cur = (cur * 10) % d;
		}
		if (index - rem[cur] > longest) {
			longest = index - rem[cur];
			ans = d;
		}
	}
	printf("%d\n", ans);
}

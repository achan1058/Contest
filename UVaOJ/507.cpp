#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, p;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n;
		int start, dest, best = 0, cur_start = 0, cur_dest = 0, cur_val = 0;

		rep(i, 1, n) {
			cin >> p;
			cur_dest++;
			cur_val += p;

			if (cur_val < 0) {
				cur_start = cur_dest = i;
				cur_val = 0;
			} else if (cur_val > best) {
				best = cur_val;
				start = cur_start;
				dest = cur_dest;
			} else if (cur_val == best && cur_dest - cur_start > dest - start) {
				start = cur_start;
				dest = cur_dest;
			}
		}

		if (best > 0)
			printf("The nicest part of route %d is between stops %d and %d\n", X, start + 1, dest + 1);
		else
			printf("Route %d has no nice parts\n", X);
	}
}

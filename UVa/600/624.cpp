#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, N;
	while (cin >> N >> n) {
		vi tracks(n);
		int best = 0, best_tracks = 0;
		read(tracks);
		rep(i, 0, 1 << n) {
			int cur = 0;
			rep(j, 0, n)
				cur += (i >> j) % 2 ? tracks[j] : 0;
			if (cur > best && cur <= N) {
				best = cur;
				best_tracks = i;
			}
		}

		rep(j, 0, n) {
			if ((best_tracks >> j) % 2)
				printf("%d ", tracks[j]);
		}
		print("sum:%d", best);
	}
}

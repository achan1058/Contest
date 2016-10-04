#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr(4, 0), seq(4, 0);
	int n;
	arr[1] = seq[1] = 1;
	arr[2] = arr[3] = 2;
	seq[2] = 3;
	seq[3] = 5;
	for (int i = 3; seq.back() <= 2000000000; i++) {
		int t = arr[i];
		rep(j, 0, t) {
			arr.pb(i);
			seq.pb(seq.back() + i);
		}
	}
	while (cin >> n && n != 0)
		printf("%d\n", lower_bound(all(seq), n) - seq.begin());
}

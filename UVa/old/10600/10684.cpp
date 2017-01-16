#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	while (cin >> N && N > 0) {
		int n, total = 0, best = 0;
		rep(i, 0, N) {
			cin >> n;
			total += n;
			best = max(total, best);
			total = max(total, 0);
		}
		if (best > 0)
			printf("The maximum winning streak is %d.\n", best);
		else
			printf("Losing streak.\n");
	}
}

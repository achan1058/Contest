#include <bits/stdc++.h>
#include "graham.h"
#include "polygon.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vector<pti> trees(n);
		vi val(n), len(n);
		rep(i, 0, n)
			cin >> trees[i] >> val[i] >> len[i];

		int bestval = inf, besttree = inf;
		double bestremain = 0;
		vi bestcut;

		rep(i, 0, 1 << n) {
			vector<pti> remain;
			vi cut;
			int cutlen = 0, cutval = 0;
			rep(j, 0, n) {
				if ((1 << j) & i) {
					cutlen += len[j];
					cutval += val[j];
					cut.pb(j);
				} else {
					remain.pb(trees[j]);
				}
			}
			if (bestval < cutval || (bestval == cutval && besttree <= bits(i)))
				continue;

			vector<pti> hull = graham(remain);
			if (sz(hull) == 1) {
				bestremain = cutlen;
				bestcut = cut;
				bestval = cutval;
				besttree = bits(i);
			} else {
				double remain = cutlen - Polygon<int>(hull).dist();
				if (remain >= -eps) {
					bestremain = remain;
					bestcut = cut;
					bestval = cutval;
					besttree = bits(i);
				}
			}
		}

		printX("Forest %d\n", X);
		printf("Cut these trees:");
		irep(v, bestcut)
			printf(" %d", v + 1);
		printf("\nExtra wood: %.2f\n", bestremain);

	}
}

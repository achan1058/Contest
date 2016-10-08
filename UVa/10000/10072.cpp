#include <bits/stdc++.h>
#include "matching.h"

int main() {
	int n, X = 1;
	while (cin >> n && n != 0) {
		printf("%s", X > 1 ? "\n" : "");
		vvi graph = mi(10, n, 0);
		int bt, bl, fl;
		vi bat(n), bowl(n), rnd(n);
		rep(j, 0, n) {
			cin >> bt >> bl >> fl;
			bat[j] = int(0.8 * bt + 0.2 * fl + 0.5);
			bowl[j] = int(0.7 * bl + 0.1 * bt + 0.2 * fl + 0.5);
			rnd[j] = int(0.4 * bl + 0.4 * bt + 0.2 * fl + 0.5);
		}

		cin >> bt >> bl >> fl;
		rep(i, 0, bt) {
			rep(j, 0, n)
				graph[i][j] = -bat[j];
		}
		rep(i, 0, bl) {
			rep(j, 0, n)
				graph[i + bt][j] = -bowl[j];
		}
		rep(i, 0, fl) {
			rep(j, 0, n)
				graph[i + bt + bl][j] = -rnd[j];
		}

		pair<int, vi> result = hungarian(graph);
		vi sort_bat(bt), sort_bowl(bl), sort_round(fl);
		rep(i, 0, bt)
			sort_bat[i] = result.y[i] + 1;
		rep(i, 0, bl)
			sort_bowl[i] = result.y[i + bt] + 1;
		rep(i, 0, fl)
			sort_round[i] = result.y[i + bt + bl] + 1;

		sort(all(sort_bat));
		sort(all(sort_bowl));
		sort(all(sort_round));

		printf("Team #%d\n", X);
		printf("Maximum Effective Score = %d\n", -result.x);
		printf("Batsmen :");
		rep(i, 0, bt)
			printf(" %d", sort_bat[i]);
		printf("\nBowlers :");
		rep(i, 0, bl)
			printf(" %d", sort_bowl[i]);
		printf("\nAll-rounders :");
		rep(i, 0, fl)
			printf(" %d", sort_round[i]);
		printf("\n");
		X++;
	}
}

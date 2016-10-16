#include <bits/stdc++.h>
#include "matching.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vvi graph = mi(10, n, 0);
		int bt, bl, fl;
		vi bat(n), bowl(n), rnd(n);
		rep(j, 0, n) {
			cin >> bt >> bl >> fl;
			bat[j] = round(0.8 * bt + 0.2 * fl);
			bowl[j] = round(0.7 * bl + 0.1 * bt + 0.2 * fl);
			rnd[j] = round(0.4 * bl + 0.4 * bt + 0.2 * fl);
		}

		cin >> bt >> bl >> fl;
		drep(i, j, bt, n)
			graph[i][j] = -bat[j];
		drep(i, j, bl, n)
			graph[i + bt][j] = -bowl[j];
		drep(i, j, fl, n)
			graph[i + bt + bl][j] = -rnd[j];

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

		printX("Team #%d\n", X);
		printf("Maximum Effective Score = %d\n", -result.x);

		printf("Batsmen :");
		irep(v, sort_bat)
			printf(" %d", v);
		printf("\nBowlers :");
		irep(v, sort_bowl)
			printf(" %d", v);
		printf("\nAll-rounders :");
		irep(v, sort_round)
			printf(" %d", v);
		printf("\n");
	}
}

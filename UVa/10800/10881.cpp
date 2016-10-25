#include <bits/stdc++.h>
#include "header.h"

int main() {
	int l, t, n;
	forX() {
		int mint = 0, maxt = 0;
		cin >> l >> t >> n;
		vector<tuple<int, char, int> > ants(n);
		vi inverse(n);
		rep(i, 0, n) {
			cin >> get<0>(ants[i]) >> get<1>(ants[i]);
			get<2>(ants[i]) = i;
		}
		sort(all(ants));

		rep(i, 0, n)
			inverse[get<2>(ants[i])] = i;
		rep(i, 0, n) {
			if (get<1>(ants[i]) == 'L')
				get<0>(ants[i]) -= t;
			else
				get<0>(ants[i]) += t;
		}

		sort(all(ants));
		printf("Case #%d:\n", X);
		rep(i, 1, n) {
			if (get<0>(ants[i]) == get<0>(ants[i - 1]))
				get<1>(ants[i]) = get<1>(ants[i - 1]) = 'T';
		}

		sort(all(ants));
		rep(i, 0, n) {
			int anti = inverse[i];

			if (get<0>(ants[anti]) < 0 || get<0>(ants[anti]) > l)
				printf("Fell off\n");
			else if (get<1>(ants[anti]) == 'T')
				printf("%d Turning\n", get<0>(ants[anti]));
			else
				printf("%d %c\n", get<0>(ants[anti]), get<1>(ants[anti]));
		}
		printf("\n");
	}
}

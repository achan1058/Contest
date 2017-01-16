#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	forX() {
		cin >> n;
		vi p, m;
		rep(i, 0, n) {
			cin >> v;
			if (v > 0)
				p.pb(v);
			else
				m.pb(-v);
		}

		sort(all(p));
		sort(all(m));

		if (sz(p) == 0 || sz(m) == 0)
			printf("1\n");
		else {
			int pi = 0, mi = 0, pl = 1, ml = 1;
			while (pi < sz(p) && mi < sz(m)) {
				if (p[pi] < m[mi]) {
					ml = pl + 1;
					pi++;
				} else if (p[pi] > m[mi]) {
					pl = ml + 1;
					mi++;
				} else {
					int temp = ml;
					pi++;
					mi++;

					if (mi < sz(m))
						ml = pl + 1;
					if (pi < sz(p))
						pl = temp + 1;
				}
			}

			printf("%d\n", max(pl, ml));
		}
	}
}

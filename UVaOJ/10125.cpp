#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi ele(n);
		vector<tuple<int, int, int>> sums(n * (n - 1) / 2);
		int ind = 0;
		rep(i, 0, n) {
			cin >> ele[i];
			rep(j, 0, i) {
				sums[ind] = make_tuple(ele[i] + ele[j], ele[i], ele[j]);
				ind++;
			}
		}
		sort(all(ele));
		sort(all(sums));
		bool found = false;
		tuple<int, int, int> t1{ -inf, -inf, -inf }, t2{ -inf, inf, inf };
		rrep(i, n - 1, 0) {
			rep(j, 0, n) {
				if (i == j)
					continue;

				get<0>(t1) = get<0>(t2) = ele[i] - ele[j];
				auto it = lower_bound(all(sums), t1);
				auto end = upper_bound(all(sums), t2);

				for (; it != end; it++) {
					if (get<0>(t1) != get<0>(*it) || ele[i] == get<1>(*it) || ele[i] == get<2>(*it)
						|| ele[j] == get<1>(*it) || ele[j] == get<2>(*it))
						continue;
					found = true;
					printf("%d\n", ele[i]);
					goto end_loop;
				}
			}
		}
	end_loop:;
		if (!found)
			printf("no solution\n");
	}
}

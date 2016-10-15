#include <bits/stdc++.h>
#include "header.h"

bool comp(const tuple<int, int, int>& job1, const tuple<int, int, int>& job2) {
	int j1 = get<0>(job1) * get<1>(job2), j2 = get<0>(job2) * get<1>(job1);
	if (j1 < j2)
		return true;
	else if (j1 > j2)
		return false;
	return get<2>(job1) < get<2>(job2);
}

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> n;
		vector<tuple<int, int, int>> jobs(n);
		bool fs = true;
		rep(i, 0, n) {
			cin >> get<0>(jobs[i]) >> get<1>(jobs[i]);
			get<2>(jobs[i]) = i + 1;
		}

		sort(all(jobs), comp);
		irep(j, jobs) {
			printf("%s%d", fs ? "" : " ", get<2>(j));
			fs = false;
		}
		printf("\n");
	}
}

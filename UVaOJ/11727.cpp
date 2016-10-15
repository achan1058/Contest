#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	vi salary(3);
	cin >> N;
	rep(X, 1, N + 1) {
		fori(s, salary)
			cin >> s;
		sort(all(salary));
		printf("Case %d: %d\n", X, salary[1]);
	}
}

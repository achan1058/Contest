#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, q;
	cin >> N;
	vi v(N);
	read(v);
	forX() {
		cin >> q;
		auto uit = upper_bound(all(v), q), lit = lower_bound(all(v), q);
		if (lit == v.begin())
			lit = v.end();
		else
			lit--;
		if (lit != v.end())
			printf("%d", *lit);
		else
			printf("X");
		printf(" ");
		if (uit != v.end())
			printf("%d", *uit);
		else
			printf("X");
		printf("\n");
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n) {
		vi books(n);
		read(books);
		cin >> m;
		int best = 0;

		unordered_set<int> s;
		irep(b, books) {
			if (s.find(m - b) != s.end())
				best = max(best, min(b, m - b));
			s.insert(b);
		}

		printf("Peter should buy books whose prices are %d and %d.\n\n", best, m - best);
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, c;
	while (cin >> n) {
		vi books(n);
		irep(b, books)
			cin >> b;

		cin >> c;
		sort(all(books));
		int up = lower_bound(all(books), (c + 1) / 2) - books.begin(), down = up;
		if (books[up] == c / 2)
			up++;
		else
			down--;
		while (true) {
			if (books[up] + books[down] > c)
				down--;
			else if (books[up] + books[down] < c)
				up++;
			else {
				printf("Peter should buy books whose prices are %d and %d.\n\n", books[down], books[up]);
				break;
			}
		}
	}
}

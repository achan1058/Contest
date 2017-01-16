#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		vs str1 = tokenizer(s1), str2 = tokenizer(s2), inter;

		sort(all(str1));
		sort(all(str2));
		set_intersection(all(str1), all(str2), back_inserter(inter));

		if (sz(inter) == sz(str1)) {
			if (sz(inter) == sz(str2))
				printf("A equals B\n");
			else
				printf("A is a proper subset of B\n");
		} else if (sz(inter) == sz(str2))
			printf("B is a proper subset of A\n");
		else if (sz(inter) == 0)
			printf("A and B are disjoint\n");
		else
			printf("I'm confused!\n");
	}
}

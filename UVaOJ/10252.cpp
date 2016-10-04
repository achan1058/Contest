#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (getline(cin, s1) && getline(cin, s2)) {
		int i1 = 0, i2 = 0;
		sort(all(s1));
		sort(all(s2));

		while (i1 < sz(s1) && i2 < sz(s2)) {
			if (s1[i1] < s2[i2]) {
				i1++;
			} else if (s1[i1] > s2[i2]) {
				i2++;
			} else {
				printf("%c", s1[i1]);
				i1++;
				i2++;
			}
		}
		printf("\n");
	}
}

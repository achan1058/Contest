#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		sort(all(s1));
		sort(all(s2));
		int t1 = 0, t2 = 0;
		while (t1 < sz(s1) && t2 < sz(s2)) {
			if (s1[t1] == s2[t2]) {
				printf(s1[t1]);
				t1++;
				t2++;
			} else if (s1[t1] < s2[t2]) {
				t1++;
			} else {
				t2++;
			}
		}
		print();
	}
}

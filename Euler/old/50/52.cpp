#include <bits/stdc++.h>
#include "header.h"

int main() {
	rep(i, 100000, 1000000) {
		string s = to_string(i);
		sort(all(s));
		bool good = true;
		rep(j, 2, 7) {
			string s2 = to_string(i * j);
			sort(all(s2));
			if (s != s2) {
				good = false;
				break;
			}
		}
		if (good) {
			printf("%d\n", i);
			break;
		}
	}
}

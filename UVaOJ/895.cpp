#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvi dict;
	string s;
	while (getline(cin, s) && s != "#") {
		vi arr(26, 0);
		fori(c, s) {
			if (c >= 'a' && c <= 'z')
				arr[c - 'a']++;
		}
		dict.pb(arr);
	}

	while (getline(cin, s) && s != "#") {
		vi arr(26, 0);
		fori(c, s) {
			if (c >= 'a' && c <= 'z')
				arr[c - 'a']++;
		}
		int num = 0;
		fori(v, dict) {
			bool good = true;
			rep(j, 0, 26) {
				if (arr[j] < v[j]) {
					good = false;
					break;
				}
			}
			if (good)
				num++;
		}
		printf("%d\n", num);
	}
}

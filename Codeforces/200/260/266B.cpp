#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	string s;
	cin >> n >> t >> s;
	rep(k, 0, t) {
		rep(i, 0, n - 1) {
			if (s[i] == 'B' && s[i + 1] == 'G') {
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}
	print(s);
}

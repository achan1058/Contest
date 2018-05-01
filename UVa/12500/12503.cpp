#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, pos = 0, v;
		string s;
		cin >> n;
		vb left(n);
		rep(i, 0, n) {
			cin >> s;
			if (s == "LEFT") {
				left[i] = true;
			} else if (s == "SAME") {
				cin >> s >> v;
				left[i] = left[v - 1];
			}
			pos += left[i] ? -1 : 1;
		}
		print("%d", pos);
	}
}

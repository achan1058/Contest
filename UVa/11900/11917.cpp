#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, t, d;
		string s;
		map<string, int> m;
		cin >> n;
		rep(i, 0, n) {
			cin >> s >> t;
			m[s] = t;
		}
		cin >> d >> s;
		printc(m[s] == 0 || m[s] > d + 5 ? "Do your own homework!" : m[s] <= d ? "Yesss" : "Late");
	}
}

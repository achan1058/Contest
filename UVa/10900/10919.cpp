#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	whileX(cin >> n >> m && n != 0) {
		int v;
		set<int> s;
		rep(i, 0, n) {
			cin >> v;
			s.insert(v);
		}

		bool good = true;
		rep(i, 0, m) {
			int c, r;
			cin >> c >> r;
			rep(j, 0, c) {
				cin >> v;
				if (s.find(v) != s.end())
					r--;
			}
			if (r > 0)
				good = false;
		}
		print(good ? "yes" : "no");
	}
}

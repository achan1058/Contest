#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		int l, n, c;
		cin >> l >> n;
		l *= 100;
		vector<queue<int>> cars(2);
		rep(i, 0, n) {
			cin >> c >> s;
			cars[s == "left" ? 0 : 1].push(c);
		}

		int pos = 0;
		int trips;
		for (trips = 0; !cars[0].empty() || !cars[1].empty(); trips++) {
			int space = l;
			while (!cars[pos].empty()) {
				int v = cars[pos].front();
				if (v > space)
					break;
				space -= v;
				cars[pos].pop();
			}
			pos = 1 - pos;
		}
		print("%d", trips);
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v1, v2;
	while (cin >> n && n != 0) {
		map<pii, int> m;
		rep(i, 0, n) {
			cin >> v1 >> v2;
			if (v1 > v2)
				m[{v1, v2}]++;
			else
				m[{v2, v1}]--;
		}

		bool good = true;
		irep(v, m) {
			if (v.y != 0) {
				good = false;
				break;
			}
		}
		printf("%s\n", good ? "YES" : "NO");
	}
}

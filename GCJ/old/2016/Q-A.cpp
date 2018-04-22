#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		if (n == 0) {
			printp("INSOMNIA\n");
			continue;
		}

		vb used(10);
		int t = 0, count = 0;
		while (count < 10) {
			t += n;
			int cur = t;
			while (cur > 0) {
				int v = cur % 10;
				cur /= 10;
				if (!used[v]) {
					used[v] = true;
					count++;
				}
			}
		}
		printp("%d\n", t);
	}
}
#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		if (n == 0) {
			printp("INSOMNIA\n");
			continue;
		}

		vb visited(10);
		int numvisited = 0;
		for (int a = n;; a += n) {
			string s = to_string(a);
			irep(c, s) {
				if (!visited[c - '0']) {
					visited[c - '0'] = true;
					numvisited++;
				}
			}
			if (numvisited == 10) {
				printp("%d\n", a);
				break;
			}
		}
	}
}

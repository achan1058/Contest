#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, cur, last;
	while (cin >> N) {
		vb hit(N);
		cin >> last;
		rep(i, 1, N) {
			cin >> cur;
			hit[abs(cur - last)] = true;
			last = cur;
		}

		bool isJolly = true;
		rep(i, 1, N) {
			if (!hit[i]) {
				isJolly = false;
				printf("Not jolly\n");
				break;
			}
		}

		if (isJolly)
			printf("Jolly\n");
	}
}

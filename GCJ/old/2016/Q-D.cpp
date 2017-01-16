#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, c, s;
	forX() {
		cin >> k >> c >> s;
		printf("Case #%d:", X);

		if (s * c < k) {
			printf(" IMPOSSIBLE\n");
			continue;
		}

		int counter = 0;
		rep(i, 0, s) {
			bool last = false;
			ll stu = 0;

			rep(j, 0, c) {
				stu *= k;
				stu += counter;
				counter++;
				if (counter >= k) {
					counter--;
					last = true;
				}
			}

			printf(" %lld", stu + 1);
			if (last)
				break;
		}

		printf("\n");
	}
}

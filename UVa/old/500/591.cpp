#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		printf("Set #%d\n", X);

		vi bricks(n);
		int sum = 0, move = 0;
		rep(i, 0, n) {
			cin >> bricks[i];
			sum += bricks[i];
		}

		sum /= n;
		rep(i, 0, n)
			move += abs(sum - bricks[i]);

		printf("The minimum number of moves is %d.\n\n", move / 2);
	}
}

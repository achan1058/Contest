#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	while (cin >> N && N != 0) {
		int a;
		vi ages(101);
		rep(i, 0, N) {
			cin >> a;
			ages[a]++;
		}
		bool fs = true;
		rep(i, 0, 101) {
			rep(j, 0, ages[i]) {
				printf("%s%d", fs ? "" : " ", i);
				fs = false;
			}
		}
		printf("\n");
	}
}

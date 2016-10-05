#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	while (cin >> N && N != 0) {
		bool fs = true;
		rep(i, 0, N) {
			cin >> n;
			if (n > 0) {
				printf("%s%d", fs ? "" : " ", n);
				fs = false;
			}
		}
		printf("%s", fs ? "0" : "");
		printf("\n");
	}
}

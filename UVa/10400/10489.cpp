#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, B;
	forX() {
		cin >> N >> B;
		int total = 0;
		rep(i, 0, B) {
			int K, prod = 1, v;
			cin >> K;
			rep(j, 0, K) {
				cin >> v;
				prod *= v;
				prod %= N;
			}
			total += prod;
			total %= N;
		}
		printf("%d\n", total);
	}
}

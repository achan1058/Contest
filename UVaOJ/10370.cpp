#include <bits/stdc++.h>
#include "header.h"

int main() {
	int C, N;
	cin >> C;
	rep(i, 0, C) {
		int sum = 0;
		cin >> N;
		vi arr(N);
		rep(j, 0, N) {
			cin >> arr[j];
			sum += arr[j];
		}
		int above = 0;
		rep(j, 0, N) {
			if (arr[j] * N > sum)
				above++;
		}
		printf("%.3f%%\n", double(above) / N * 100);
	}
}

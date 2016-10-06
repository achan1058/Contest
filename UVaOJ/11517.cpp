#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		int tar, num, bill;
		cin >> tar >> num;
		vi arr(20001, inf);
		arr[0] = 0;
		rep(i, 0, num) {
			cin >> bill;
			rrep(j, 10000, 0)
				arr[j + bill] = min(arr[j + bill], arr[j] + 1);
		}
		rep(j, tar, 20001) {
			if (arr[j] < inf) {
				printf("%d %d\n", j, arr[j]);
				break;
			}
		}
	}
}

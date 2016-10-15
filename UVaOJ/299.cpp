#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, L;
	cin >> N;
	rep(X, 0, N) {
		cin >> L;
		vi arr(L);
		int num_swap = 0;
		fori(v, arr)
			cin >> v;
		rrep(i, L - 1, 0) {
			rep(j, 0, i) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
					num_swap++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", num_swap);
	}
}

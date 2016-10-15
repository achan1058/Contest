#include <bits/stdc++.h>
#include "header.h"

ll output = 0;
void mergesort(vi& arr, int left, int right) {
	if (right - left < 25) {
		rrep(i, right - 1, left) {
			rep(j, left, i) {
				if (arr[j + 1] < arr[j]) {
					swap(arr[j], arr[j + 1]);
					output++;
				}
			}
		}
		return;
	}

	int mid = (left + right) / 2, f1 = 0, f2 = mid, p = left;
	mergesort(arr, left, mid);
	mergesort(arr, mid, right);
	vi temp(arr.begin() + left, arr.begin() + mid);
	while (f1 < mid - left) {
		if (f2 == right || temp[f1] < arr[f2]) {
			arr[p] = temp[f1];
			f1++;
		} else {
			arr[p] = arr[f2];
			output += mid - left - f1;
			f2++;
		}
		p++;
	}
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi arr(n);
		fori(v, arr)
			cin >> v;
		output = 0;
		mergesort(arr, 0, sz(arr));
		printf("%lld\n", output);
	}
}

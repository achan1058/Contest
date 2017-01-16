#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	forX() {
		cin >> N;
		vi nums(N);
		read(nums);

		int front = 0, back = N - 1, swaps = 0;
		while (back > front) {
			int m = front;
			rep(i, front + 1, back + 1) {
				if (nums[m] > nums[i])
					m = i;
			}

			int mn = nums[m];
			if (m - front <= back - m) {
				rrep(i, m, front + 1)
					nums[i] = nums[i - 1];
				swaps += m - front;
				nums[front] = mn;
				front++;
			} else {
				rep(i, m, back)
					nums[i] = nums[i + 1];
				swaps += back - m;
				nums[back] = mn;
				back--;
			}
		}

		printp("%d\n", swaps);
	}
}
#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	forX() {
		cin >> n >> k;
		vi avg(n - k + 1);
		read(avg);
		vi mn(k), mx(k), diff(k);
		int upshift = 0;
		rep(i, 0, k) {
			int temp = 0;
			for (int j = i; j < n - k; j += k) {
				temp += avg[j + 1] - avg[j];
				mn[i] = min(mn[i], temp);
				mx[i] = max(mx[i], temp);
			}
			diff[i] = mx[i] - mn[i];
			upshift -= mn[i];
		}
		sort(all(diff));
		int d0 = ((avg[0] - upshift) % k + k) % k;

		drep(i, j, d0, k) {
			if (j == k - 1 || diff[j] < diff[j + 1]) {
				diff[j]++;
				break;
			}
		}
		printp("%d\n", diff.back());
	}
}

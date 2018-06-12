#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi nums(n);
		int count = 0;
		read(nums);
		drep(i, j, n, i) {
			if (gcd(nums[i], nums[j]) == 1)
				count++;
		}
		if (count == 0) {
			print("No estimate for this data set.");
			continue;
		}
		double ans2 = 3. / count * n * (n - 1);
		print("%.6f", sqrt(ans2));
	}
}

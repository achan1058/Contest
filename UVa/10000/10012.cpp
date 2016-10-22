#include <bits/stdc++.h>
#include "header.h"

double dist(vd& radii) {
	int n = sz(radii);
	vd center = radii;
	double mx = 2 * radii[0];
	center[0] = radii[0];
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			double diff = radii[i] - radii[j], sum = radii[i] + radii[j];
			center[i] = max(center[i], sqrt(sum * sum - diff * diff) + center[j]);
		}
		mx = max(mx, center[i] + radii[i]);
	}
	return mx;
}

int main() {
	int n;
	forX() {
		cin >> n;
		vd radii(n);
		for (double& r : radii)
			cin >> r;

		sort(all(radii));
		double mn = inf;
		do {
			mn = min(mn, dist(radii));
		} while (next_permutation(all(radii)));
		printf("%.3lf\n", mn);
	}
}

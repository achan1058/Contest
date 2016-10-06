#include <bits/stdc++.h>
#include "header.h"

int main() {
	int f, r;
	while (cin >> f >> r && f != 0) {
		vi fw(f), rw(r);
		vd ratio;
		for (int& v : fw)
			cin >> v;
		for (int& v : rw)
			cin >> v;
		for (int& vf : fw) {
			for (int& vr : rw)
				ratio.push_back(double(vr) / vf);
		}
		double mx = 0;
		sort(all(ratio));
		for (int i = 1; i < f * r; i++)
			mx = max(mx, ratio[i] / ratio[i - 1]);
		printf("%.2lf\n", mx);
	}
}

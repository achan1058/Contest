#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl s2(101), s3(101), s4(101), r2(101), r3(101), r4(101);
	rep(i, 1, 101) {
		s2[i] = s2[i - 1] + i * i;
		s3[i] = s3[i - 1] + i * i * i;
		s4[i] = s4[i - 1] + i * i * i * i;

		ll s = i * (i + 1) / 2;
		r2[i] = s * s;
		r3[i] = s * s * s;
		r4[i] = s * s * s * s;
	}
	int n;
	while (cin >> n)
		printf("%lld %lld %lld %lld %lld %lld\n", s2[n], r2[n] - s2[n], s3[n], r3[n] - s3[n], s4[n], r4[n] - s4[n]);
}

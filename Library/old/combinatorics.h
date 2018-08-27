#pragma once
#include <bits/stdc++.h>
using namespace std;

ll multinomial(const vi& r) {
	ll result = 1;
	int n = 0;
	irep(v, r) {
		n += v;
		result *= binomial(n, v);
	}
	return result;
}

#pragma once
#include <bits/stdc++.h>
using namespace std;

// n people, every k'th person is selected
// if n = 5 and k = 2, selects 1, 3, 0, 4 remain 2
int joseph(int n, int k) {
	int r = 0;
	for (int i = 2; i <= n; i++)
		r = (r + k) % i;
	return r;
}

int triangular(long long n, bool ceiling = false) {
	double d = sqrt(8 * n + 1);
	long long t = ((ceiling ? ceil(d) : d) - 1) / 2;
	return ceiling ? t * (t + 1) / 2 < n ? t + 1 : t : t * (t + 1) / 2 > n ? t - 1 : t;
}

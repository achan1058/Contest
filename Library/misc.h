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

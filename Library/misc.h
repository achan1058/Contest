#pragma once
#include "header.h"

// n people, k'th person
int joseph(int n, int k) {
	int r = 0;
	rep(i, 2, n + 1)
		r = (r + k) % i;
	return r;
}

vvs roman = {
	{ "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" },
	{ "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
	{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" } };

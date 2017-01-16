#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl red(51), blue(51), green(51);
	red[0] = red[1] = 1;
	green[0] = green[1] = green[2] = 1;
	blue[0] = blue[1] = blue[2] = blue[3] = 1;
	rep(i, 2, 51)
		red[i] = red[i - 1] + red[i - 2];
	rep(i, 3, 51)
		green[i] = green[i - 1] + green[i - 3];
	rep(i, 4, 51)
		blue[i] = blue[i - 1] + blue[i - 4];

	printf("%lld\n", red[50] + green[50] + blue[50] - 3);
}

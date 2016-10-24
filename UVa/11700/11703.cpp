#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi seq(1000001);
	int n;
	seq[0] = 1;
	rep(i, 1, 1000001)
		seq[i] = (seq[int(i - sqrt(i) + eps)] + seq[int(log(i) + eps)] + seq[int(i*sin(i)*sin(i) + eps)]) % 1000000;
	while (cin >> n && n != -1)
		printf("%d\n", seq[n]);
}

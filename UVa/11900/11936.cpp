#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl v(3);
	forX() {
		read(v);
		sort(all(v));
		printf("%s\n", v[0] <= 0 || v[0] + v[1] <= v[2] ? "Wrong!!" : "OK");
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vi v(4);
		read(v);
		sort(all(v));
		if (v[0] + v[1] <= v[3] - v[2] || v[0] < 0)
			printf("banana\n");
		else if (v[0] == v[3])
			printf("square\n");
		else if (v[0] == v[1] && v[2] == v[3])
			printf("rectangle\n");
		else
			printf("quadrangle\n");
	}
}

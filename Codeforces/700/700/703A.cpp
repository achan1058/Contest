#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m = 0, c = 0, v1, v2;
	forX() {
		cin >> v1 >> v2;
		if (v1 > v2)
			m++;
		else if (v2 > v1)
			c++;
	}
	print(m > c ? "Mishka" : m < c ? "Chris" : "Friendship is magic!^^");
}

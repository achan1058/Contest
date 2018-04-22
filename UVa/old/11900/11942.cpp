#include <bits/stdc++.h>
#include "header.h"

int main() {
	printf("Lumberjacks:\n");
	forX() {
		vi arr(10);
		read(arr);
		bool lt = false, gt = false;
		rep(i, 1, 10) {
			if (arr[i] > arr[i - 1])
				gt = true;
			else
				lt = true;
		}
		printf("%s\n", gt && lt ? "Unordered" : "Ordered");
	}
}

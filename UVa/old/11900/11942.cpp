#include <bits/stdc++.h>
#include "header.h"

int main() {
	printf("Lumberjacks:\n");
	forX() {
		bool ge = true, le = true;
		vi len(10);
		read(len);
		rep(i, 0, 9) {
			if (len[i] < len[i + 1])
				ge = false;
			else
				le = false;
		}
		printf("%s\n", ge || le ? "Ordered" : "Unordered");
	}
}

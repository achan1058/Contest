#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y;
	while (cin >> n >> x >> y && (n | x | y) != 0) {
		int result = 0, cur_x = 1024, cur_y = 1024;
		while (n > 0) {
			if (cur_x - n <= x && x <= cur_x + n && cur_y - n <= y && y <= cur_y + n)
				result++;
			if (cur_x > x)
				cur_x -= n;
			else
				cur_x += n;
			if (cur_y > y)
				cur_y -= n;
			else
				cur_y += n;

			n /= 2;
		}
		printf("%3d\n", result);
	}
}

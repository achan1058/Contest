#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(getline(cin, s) && s != "END") {
		double x = 0, y = 0, dx = 0, dy = 0, dist = 0;
		irep(c, s) {
			if (c >= '0' && c <= '9') {
				dist *= 10;
				dist += c - '0';
			} else if (c == 'N')
				dy = 1;
			else if (c == 'S')
				dy = -1;
			else if (c == 'E')
				dx = 1;
			else if (c == 'W')
				dx = -1;
			else {
				if (abs(dy) + abs(dx) > 1.5) {
					dx /= sqrt(2);
					dy /= sqrt(2);
				}
				x += dx * dist;
				y += dy * dist;
				dist = 0;
				dx = 0;
				dy = 0;
			}
		}
		printf("Map #%d\n", X);
		printf("The treasure is located at (%.3f,%.3f).\n", x, y);
		printf("The distance to the treasure is %.3f.\n\n", sqrt(x * x + y * y));
	}
}

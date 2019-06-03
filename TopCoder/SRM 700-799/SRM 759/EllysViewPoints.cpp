#include <bits/stdc++.h>
#include "header.h"

class EllysViewPoints {
public:
	int getCount(int N, int M, vector<string> matrix) {
		int r = 0, c = 0;
		rep(i, 0, N) {
			bool good = true;
			rep(j, 0, M) {
				if (matrix[i][j] != '.') {
					good = false;
					break;
				}
			}
			r += (good ? 1 : 0);
		}

		rep(j, 0, M) {
			bool good = true;
			rep(i, 0, N) {
				if (matrix[i][j] != '.') {
					good = false;
					break;
				}
			}
			c += (good ? 1 : 0);
		}

		return r * c;
	}
};

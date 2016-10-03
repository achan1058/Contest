#include <bits/stdc++.h>
#include "header.h"

string output = " .xW";
vi nextrow(10);
int main() {
	int N;
	cin >> N;

	rep(X, 0, N) {
		printf(X > 0 ? "\n" : "");
		rep(i, 0, 10)
			cin >> nextrow[i];

		vvi arr = mi(2, 42, 0);
		arr[0][20] = 1;
		rep(i, 0, 50) {
			rep(j, 1, 41) {
				printf("%c", output[arr[i % 2][j]]);
				arr[1 - i % 2][j] = nextrow[arr[i % 2][j - 1] + arr[i % 2][j] + arr[i % 2][j + 1]];
			}
			printf("\n");
		}
	}
}

#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		int mx = 0, ele = -inf, total = 0;
		cin >> n;
		vvi arr = mi(n, n + 1, 0);
		vi col_total(n + 1);

		rep(i, 0, n) {
			arr[i][0] = 0;
			rep(j, 0, n) {
				cin >> arr[i][j + 1];
				total += arr[i][j + 1];
				arr[i][j + 1] += arr[i][j];
				col_total[j + 1] += arr[i][j + 1];
			}
		}

		rep(j1, 0, n) {
			rep(j2, j1, n + 1) {
				int M1_sum = 0, M2_sum = 0, m1_sum = 0, m2_sum = 0;
				rep(i, 0, n) {
					M1_sum += arr[i][j2] - arr[i][j1];
					M2_sum += arr[i][n] - arr[i][j2] + arr[i][j1];
					m1_sum += arr[i][j2] - arr[i][j1];
					m2_sum += arr[i][n] - arr[i][j2] + arr[i][j1];
					mx = max(mx, M1_sum);
					mx = max(mx, M2_sum);
					mx = max(mx, col_total[j2] - col_total[j1] - m1_sum);
					mx = max(mx, total - col_total[j2] + col_total[j1] - m2_sum);
					M1_sum = max(M1_sum, 0);
					M2_sum = max(M2_sum, 0);
					m1_sum = min(m1_sum, 0);
					m2_sum = min(m2_sum, 0);
				}
			}
		}
		printf("%d\n", mx);
	}
}

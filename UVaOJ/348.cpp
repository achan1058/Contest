#include <bits/stdc++.h>
#include "header.h"

//[i,j] [j..j+i]
int main() {
	int N, X = 1;
	while (cin >> N && N != 0) {
		vl dim(N + 1);
		vvs output = ms(N, N, "");
		vvl best = ml(N, N, 0);

		rep(i, 0, N) {
			cin >> dim[i] >> dim[i + 1];
			output[i][i] = "A" + to_string(i + 1);
			best[i][i] = 0;
		}
		rep(i, 1, N) {
			rep(j, 0, N - i) {
				best[j][j + i] = inf;
				rep(k, j, j + i) {
					if (best[j][j + i] > best[j][k] + best[k + 1][j + i] + dim[j] * dim[k + 1] * dim[j + i + 1]) {
						best[j][j + i] = best[j][k] + best[k + 1][j + i] + dim[j] * dim[k + 1] * dim[j + i + 1];
						output[j][j + i] = '(' + output[j][k] + " x " + output[k + 1][j + i] + ')';
					}
				}
			}
		}
		printf("Case %d: %s\n", X, output[0][N - 1].c_str());
		X++;
	}
}

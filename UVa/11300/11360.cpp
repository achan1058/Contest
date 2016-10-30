#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, v1, v2;
	string s;
	forX() {
		cin >> n;
		vs mat(n);
		read(mat);
		cin >> m;
		rep(k, 0, m) {
			cin >> s;
			if (s == "row") {
				cin >> v1 >> v2;
				rep(j, 0, n)
					swap(mat[v1 - 1][j], mat[v2 - 1][j]);
			} else if (s == "col") {
				cin >> v1 >> v2;
				rep(j, 0, n)
					swap(mat[j][v1 - 1], mat[j][v2 - 1]);
			} else if (s == "transpose") {
				drep(i, j, n, i)
					swap(mat[i][j], mat[j][i]);
			} else if (s == "inc") {
				drep(i, j, n, n)
					mat[i][j] = (mat[i][j] - '0' + 1) % 10 + '0';
			} else if (s == "dec") {
				drep(i, j, n, n)
					mat[i][j] = (mat[i][j] - '0' + 9) % 10 + '0';
			}
		}

		printf("Case #%d\n", X);
		irep(v, mat)
			printf("%s\n", v.c_str());
		printf("\n");
	}
}

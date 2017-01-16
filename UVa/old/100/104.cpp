#include <bits/stdc++.h>
#include "header.h"

vi floydWarshall(const vvd& graph) {
	int n = sz(graph);
	vector<vvd> mat = vector<vvd>(n, graph);
	vector<vvi> prev = vector<vvi>(n, mi(n, n, -1));
	rep(x, 0, n) {
		drep(i, j, n, n)
			prev[0][i][j] = i;
	}
	rep(x, 1, n) {
		rep(k, 0, n) {
			drep(i, j, n, n) {
				if (mat[0][i][k] * mat[x - 1][k][j] > mat[x][i][j] + eps) {
					mat[x][i][j] = mat[0][i][k] * mat[x - 1][k][j];
					prev[x][i][j] = prev[x - 1][k][j];
				}
			}
		}
		rep(i, 0, n) {
			if (mat[x][i][i] > 1.01 + eps) {
				vi ans = { i };
				while (x >= 0) {
					ans.push_back(prev[x][i][ans.back()]);
					x--;
				}
				reverse(all(ans));
				return ans;
			}
		}
	}
	return vi();
}

int main() {
	int n;
	while (cin >> n) {
		vvd graph = md(n, n, 0);
		drep(i, j, n, n) {
			if (i == j)
				graph[i][j] = 1;
			else
				cin >> graph[i][j];
		}

		vi ans = floydWarshall(graph);
		if (sz(ans) == 0)
			printf("no arbitrage sequence exists\n");
		else {
			for (int i = 0; i < sz(ans); i++)
				printf("%d%c", ans[i] + 1, i == sz(ans) - 1 ? '\n' : ' ');
		}
	}
}

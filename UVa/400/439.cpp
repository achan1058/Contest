#include <bits/stdc++.h>
#include "shortest_path.h"

inline int serial(int x, int y) { return 8 * x + y; }
inline int serial(string s) { return 8 * (s[0] - 'a') + s[1] - '1'; }
int main() {
	vi dx = { 1, 2, 2, 1, -1, -2, -2, -1 }, dy = { 2, 1, -1, -2, -2, -1, 1, 2 };
	vvi graph = mi(64, 64, inf);
	string s1, s2;
	rep(i, 0, 8) {
		rep(j, 0, 8) {
			graph[serial(i, j)][serial(i, j)] = 0;
			rep(k, 0, 8) {
				int nx = i + dx[k], ny = j + dy[k];

				if (nx >= 0 && nx < 8 && ny >= 0 && ny < 8)
					graph[serial(i, j)][serial(nx, ny)] = 1;
			}
		}
	}
	vvi dist = floydWarshall(graph).x;
	while (cin >> s1 >> s2) {
		int i1 = serial(s1), i2 = serial(s2);
		printf("To get from %s to %s takes %d knight moves.\n", s1.c_str(), s2.c_str(), dist[i1][i2]);
	}
}

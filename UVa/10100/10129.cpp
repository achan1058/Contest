#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vs strs(n);
		vi count(26);
		vb used(26);
		vvi graph = mi(26, 26, inf);
		int begin = -1, end = -1;
		rep(i, 0, 26)
			graph[i][i] = 0;
		irep(s, strs) {
			cin >> s;
			int a = s[0] - 'a', b = s.back() - 'a';
			used[a] = true;
			count[a]++;
			count[b]--;
			graph[a][b] = 1;
		}
		rep(i, 0, 26) {
			if (abs(count[i]) > 1) {
				begin = inf;
				break;
			} else if (count[i] == 1) {
				if (begin != -1) {
					begin = inf;
					break;
				} else {
					begin = i;
				}
			} else if (count[i] == -1)
				end = i;
		}
		if (begin == inf)
			printf("The door cannot be opened.\n");
		else {
			if (begin == -1) {
				rep(i, 0, 26) {
					if (used[i]) {
						begin = i;
						break;
					}
				}
			}
			vvi dist = floydWarshall(graph).x;
			bool bad = false;
			rep(i, 0, 26) {
				if (used[i] && dist[begin][i] == inf) {
					bad = true;
					break;
				}
			}
			if (bad)
				printf("The door cannot be opened.\n");
			else
				printf("Ordering is possible.\n");
		}
	}
}

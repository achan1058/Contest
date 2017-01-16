#include <bits/stdc++.h>
#include "max_flow.h"

int main() {
	int k, p, v, q;
	while (cin >> k >> p && (k | p) != 0) {
		vvi graph = mi(k + p + 2, k + p + 2, 0);
		int total = 0;
		rep(i, 0, k) {
			cin >> graph[i + 2][1];
			total += graph[i + 2][1];
		}
		rep(i, 0, p) {
			graph[0][i + k + 2] = 1;
			cin >> q;
			rep(j, 0, q) {
				cin >> v;
				graph[i + k + 2][v + 1] = 1;
			}
		}

		auto flow = pushRelabel(graph, 0, 1);
		graph = get<1>(flow);
		if (get<0>(flow) < total) {
			printf("0\n");
			continue;
		} else {
			printf("1\n");
			rep(i, 0, k) {
				bool first = true;
				rep(j, 0, p) {
					if (graph[j + k + 2][i + 2] == 1) {
						printf("%s%d", first ? "" : " ", j + 1);
						first = false;
					}
				}
				printf("\n");
			}
		}
	}
}

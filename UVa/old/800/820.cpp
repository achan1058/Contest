#include <bits/stdc++.h>
#include "max_flow.h"

int main() {
	int n, s, t, e, v1, v2, c;
	whileX(cin >> n && n != 0) {
		vvi graph = mi(n, n, 0);
		cin >> s >> t >> e;
		s--;
		t--;
		rep(i, 0, e) {
			cin >> v1 >> v2 >> c;
			graph[v1 - 1][v2 - 1] += c;
			graph[v2 - 1][v1 - 1] += c;
		}
		printf("Network %d\n", X);
		printf("The bandwidth is %d.\n\n", get<0>(pushRelabel(graph, s, t)));
	}
}

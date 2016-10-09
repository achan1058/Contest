#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int N, n, e, e1, e2, v;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> e;

		AdjList<int> edges(n);
		rep(i, 0, e) {
			cin >> e1 >> e2 >> v;
			edges.push(e1, e2, v);
		}

		vi result = bellmanFord(edges, 0).x;
		bool possible = false;
		rep(i, 0, n) {
			if (result[i] == -inf) {
				possible = true;
				break;
			}
		}
		printf("%s\n", possible ? "possible" : "not possible");
	}
}

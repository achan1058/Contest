#include <bits/stdc++.h>
#include "shortest_path.h"

int main() {
	int T, n;
	cin >> T;
	for (int X = 1; X <= T; X++) {
		cin >> n;
		vector<pii> pts(n);
		vvd graph = md(n, n, inf);
		for (auto& p : pts)
			cin >> p.x >> p.y;
		for (int i = 0; i < n; i++) {
			graph[i][i] = 0;
			for (int j = 0; j < i; j++) {
				int x = pts[i].x - pts[j].x, y = pts[i].y - pts[j].y;
				double d = sqrt(x * x + y * y);
				if (d <= 10 + eps)
					graph[i][j] = graph[j][i] = d;
			}
		}

		vvd dist = floydWarshall(graph).first;
		double longest = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++)
				longest = max(longest, dist[i][j]);
		}

		printf("Case #%d:\n", X);
		if (longest >= inf - eps)
			printf("Send Kurdy\n\n");
		else
			printf("%.4lf\n\n", longest);

	}
}

#include <bits/stdc++.h>
#include "header.h"

class Family {
public:
	string isFamily(vector<int> parent1, vector<int> parent2) {
		int n = sz(parent1);
		vi color(n, -1);
		vvi mat = mi(n, n, 0);

		rep(i, 0, n) {
			if (parent1[i] != -1) {
				mat[parent1[i]][parent2[i]] = 1;
				mat[parent2[i]][parent1[i]] = 1;
			}
		}

		rep(x, 0, n) {
			if (color[x] != -1)
				continue;
			queue<int> q;
			q.push(x);
			color[x] = 0;
			while (!q.empty()) {
				int v = q.front();
				q.pop();

				rep(i, 0, n) {
					if (mat[v][i] == 0)
						continue;
					if (color[i] == color[v])
						return "Impossible";
					if (color[i] == -1) {
						color[i] = 1 - color[v];
						q.push(i);
					}
				}
			}
		}
		return "Possible";
	}
};

#include <bits/stdc++.h>
#include "components.h"

int main() {
	int n, v1, v2;
	string s;
	while (cin >> n && n != 0) {
		vvi graph(n);
		getline(cin, s);
		while (getline(cin, s) && s != "0") {
			stringstream ss(s);
			ss >> v1;
			while (ss >> v2) {
				graph[v1 - 1].pb(v2 - 1);
				graph[v2 - 1].pb(v1 - 1);
			}
		}
		printf("%d\n", sz(getArticulationPoints(graph)));
	}
}

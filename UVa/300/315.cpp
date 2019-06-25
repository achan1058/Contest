#include <bits/stdc++.h>
#include "components.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "0") {
		int n = stoi(s);
		vvi graph(n);
		while (getline(cin, s) && s != "0") {
			stringstream ss(s);
			int v1, v2;
			ss >> v1;
			while (ss >> v2) {
				graph[v1 - 1].pb(v2 - 1);
				graph[v2 - 1].pb(v1 - 1);
			}
		}
		print(sz(getArticulationPoints(graph)));
	}
}
